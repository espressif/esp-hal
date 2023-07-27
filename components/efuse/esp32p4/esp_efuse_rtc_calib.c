/*
 * SPDX-FileCopyrightText: 2022-2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <esp_bit_defs.h>
#include "esp_efuse.h"
#include "esp_efuse_table.h"

int esp_efuse_rtc_calib_get_ver(void)
{
    //TODO: IDF-7467
    uint32_t result = 0;
    esp_efuse_read_field_blob(ESP_EFUSE_BLK_VERSION_MAJOR, &result, ESP_EFUSE_BLK_VERSION_MAJOR[0]->bit_count);
    return result;
}

uint32_t esp_efuse_rtc_calib_get_init_code(int version, uint32_t adc_unit, int atten)
{
    //TODO: IDF-7467, check below
    assert(version == 1);
    (void) adc_unit;
    const esp_efuse_desc_t** init_code_efuse;
    assert(atten < 4);
    if (atten == 0) {
        init_code_efuse = ESP_EFUSE_ADC1_INIT_CODE_ATTEN0;
    } else if (atten == 1) {
        init_code_efuse = ESP_EFUSE_ADC1_INIT_CODE_ATTEN1;
    } else if (atten == 2) {
        init_code_efuse = ESP_EFUSE_ADC1_INIT_CODE_ATTEN2;
    } else {
        init_code_efuse = ESP_EFUSE_ADC1_INIT_CODE_ATTEN3;
    }

    int init_code_size = esp_efuse_get_field_size(init_code_efuse);
    assert(init_code_size == 10);

    uint32_t init_code = 0;
    ESP_ERROR_CHECK(esp_efuse_read_field_blob(init_code_efuse, &init_code, init_code_size));
    return init_code + 1000;    // version 1 logic
}

esp_err_t esp_efuse_rtc_calib_get_cal_voltage(int version, int atten, uint32_t* out_digi, uint32_t* out_vol_mv)
{
    //TODO: IDF-7467, check below
    const esp_efuse_desc_t** cal_vol_efuse;
    uint32_t calib_vol_expected_mv;
    if (version != 1) {
        return ESP_ERR_INVALID_ARG;
    }
    if (atten >= 4) {
        return ESP_ERR_INVALID_ARG;
    }
    if (atten == 0) {
        cal_vol_efuse = ESP_EFUSE_ADC1_CAL_VOL_ATTEN0;
        calib_vol_expected_mv = 400;
    } else if (atten == 1) {
        cal_vol_efuse = ESP_EFUSE_ADC1_CAL_VOL_ATTEN1;
        calib_vol_expected_mv = 550;
    } else if (atten == 2) {
        cal_vol_efuse = ESP_EFUSE_ADC1_CAL_VOL_ATTEN2;
        calib_vol_expected_mv = 750;
    } else {
        cal_vol_efuse = ESP_EFUSE_ADC1_CAL_VOL_ATTEN3;
        calib_vol_expected_mv = 1370;
    }

    assert(cal_vol_efuse[0]->bit_count == 10);

    uint32_t cal_vol = 0;
    ESP_ERROR_CHECK(esp_efuse_read_field_blob(cal_vol_efuse, &cal_vol, cal_vol_efuse[0]->bit_count));

    *out_digi = 2000 + ((cal_vol & BIT(9))? -(cal_vol & ~BIT9): cal_vol);
    *out_vol_mv = calib_vol_expected_mv;
    return ESP_OK;
}

esp_err_t esp_efuse_rtc_calib_get_tsens_val(float* tsens_cal)
{
    //TODO: IDF-7482
    *tsens_cal = 0;
    return ESP_OK;
}
