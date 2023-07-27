/*
 * SPDX-FileCopyrightText: 2017-2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef __cplusplus
extern "C" {
#endif

#include "esp_efuse.h"

// md5_digest_table 57d7fbd8410e3a4d1e0d19e39b9cb3c0
// This file was generated from the file esp_efuse_table.csv. DO NOT CHANGE THIS FILE MANUALLY.
// If you want to change some fields, you need to change esp_efuse_table.csv file
// then run `efuse_common_table` or `efuse_custom_table` command it will generate this file.
// To show efuse_table run the command 'show_efuse_table'.


extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_RD_DIS[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_GROUP_1[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_GROUP_2[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_HP_PWR_SRC_SEL[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_SPI_BOOT_CRYPT_CNT[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_SECURE_BOOT_KEY_REVOKE0[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_SECURE_BOOT_KEY_REVOKE1[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_SECURE_BOOT_KEY_REVOKE2[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_KEY0_PURPOSE[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_KEY1_PURPOSE[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_KEY2_PURPOSE[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_KEY3_PURPOSE[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_KEY4_PURPOSE[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_KEY5_PURPOSE[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_GROUP_3[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_SECURE_BOOT_EN[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_SECURE_BOOT_AGGRESSIVE_REVOKE[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_ECDSA_FORCE_USE_HARDWARE_K[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_GROUP_4[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_HUK_GEN_STATE[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_BLK1[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_SYS_DATA_PART1[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_USER_DATA[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_KEY0[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_KEY1[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_KEY2[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_KEY3[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_KEY4[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_KEY5[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_SYS_DATA_PART2[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_GROUP_5[];
extern const esp_efuse_desc_t* ESP_EFUSE_WR_DIS_SOFT_DIS_JTAG[];
extern const esp_efuse_desc_t* ESP_EFUSE_RD_DIS[];
extern const esp_efuse_desc_t* ESP_EFUSE_RD_DIS_KEY0[];
extern const esp_efuse_desc_t* ESP_EFUSE_RD_DIS_KEY1[];
extern const esp_efuse_desc_t* ESP_EFUSE_RD_DIS_KEY2[];
extern const esp_efuse_desc_t* ESP_EFUSE_RD_DIS_KEY3[];
extern const esp_efuse_desc_t* ESP_EFUSE_RD_DIS_KEY4[];
extern const esp_efuse_desc_t* ESP_EFUSE_RD_DIS_KEY5[];
extern const esp_efuse_desc_t* ESP_EFUSE_RD_DIS_SYS_DATA_PART2[];
extern const esp_efuse_desc_t* ESP_EFUSE_USB_DEVICE_EXCHG_PINS[];
extern const esp_efuse_desc_t* ESP_EFUSE_USB_OTG11_EXCHG_PINS[];
extern const esp_efuse_desc_t* ESP_EFUSE_DIS_USB_JTAG[];
extern const esp_efuse_desc_t* ESP_EFUSE_POWERGLITCH_EN[];
extern const esp_efuse_desc_t* ESP_EFUSE_DIS_USB_SERIAL_JTAG[];
extern const esp_efuse_desc_t* ESP_EFUSE_DIS_FORCE_DOWNLOAD[];
extern const esp_efuse_desc_t* ESP_EFUSE_DIS_SPI_DOWNLOAD_MSPI[];
extern const esp_efuse_desc_t* ESP_EFUSE_DIS_TWAI[];
extern const esp_efuse_desc_t* ESP_EFUSE_JTAG_SEL_ENABLE[];
extern const esp_efuse_desc_t* ESP_EFUSE_SOFT_DIS_JTAG[];
extern const esp_efuse_desc_t* ESP_EFUSE_DIS_PAD_JTAG[];
extern const esp_efuse_desc_t* ESP_EFUSE_DIS_DOWNLOAD_MANUAL_ENCRYPT[];
extern const esp_efuse_desc_t* ESP_EFUSE_USB_DEVICE_DREFH[];
extern const esp_efuse_desc_t* ESP_EFUSE_USB_OTG11_DREFH[];
extern const esp_efuse_desc_t* ESP_EFUSE_USB_PHY_SEL[];
extern const esp_efuse_desc_t* ESP_EFUSE_HUK_GEN_STATE[];
extern const esp_efuse_desc_t* ESP_EFUSE_KM_RND_SWITCH_CYCLE[];
extern const esp_efuse_desc_t* ESP_EFUSE_KM_DEPLOY_ONLY_ONCE[];
extern const esp_efuse_desc_t* ESP_EFUSE_FORCE_USE_KEY_MANAGER_KEY[];
extern const esp_efuse_desc_t* ESP_EFUSE_FORCE_DISABLE_SW_INIT_KEY[];
extern const esp_efuse_desc_t* ESP_EFUSE_WDT_DELAY_SEL[];
extern const esp_efuse_desc_t* ESP_EFUSE_SPI_BOOT_CRYPT_CNT[];
extern const esp_efuse_desc_t* ESP_EFUSE_SECURE_BOOT_KEY_REVOKE0[];
extern const esp_efuse_desc_t* ESP_EFUSE_SECURE_BOOT_KEY_REVOKE1[];
extern const esp_efuse_desc_t* ESP_EFUSE_SECURE_BOOT_KEY_REVOKE2[];
extern const esp_efuse_desc_t* ESP_EFUSE_KEY_PURPOSE_0[];
extern const esp_efuse_desc_t* ESP_EFUSE_KEY_PURPOSE_1[];
extern const esp_efuse_desc_t* ESP_EFUSE_KEY_PURPOSE_2[];
extern const esp_efuse_desc_t* ESP_EFUSE_KEY_PURPOSE_3[];
extern const esp_efuse_desc_t* ESP_EFUSE_KEY_PURPOSE_4[];
extern const esp_efuse_desc_t* ESP_EFUSE_KEY_PURPOSE_5[];
extern const esp_efuse_desc_t* ESP_EFUSE_SEC_DPA_LEVEL[];
extern const esp_efuse_desc_t* ESP_EFUSE_ECDSA_FORCE_USE_HARDWARE_K[];
extern const esp_efuse_desc_t* ESP_EFUSE_CRYPT_DPA_ENABLE[];
extern const esp_efuse_desc_t* ESP_EFUSE_SECURE_BOOT_EN[];
extern const esp_efuse_desc_t* ESP_EFUSE_SECURE_BOOT_AGGRESSIVE_REVOKE[];
extern const esp_efuse_desc_t* ESP_EFUSE_FLASH_TYPE[];
extern const esp_efuse_desc_t* ESP_EFUSE_FLASH_PAGE_SIZE[];
extern const esp_efuse_desc_t* ESP_EFUSE_FLASH_ECC_EN[];
extern const esp_efuse_desc_t* ESP_EFUSE_DIS_USB_OTG_DOWNLOAD_MODE[];
extern const esp_efuse_desc_t* ESP_EFUSE_FLASH_TPUW[];
extern const esp_efuse_desc_t* ESP_EFUSE_DIS_DOWNLOAD_MODE[];
extern const esp_efuse_desc_t* ESP_EFUSE_DIS_DIRECT_BOOT[];
extern const esp_efuse_desc_t* ESP_EFUSE_DIS_USB_SERIAL_JTAG_ROM_PRINT[];
extern const esp_efuse_desc_t* ESP_EFUSE_DIS_USB_SERIAL_JTAG_DOWNLOAD_MODE[];
extern const esp_efuse_desc_t* ESP_EFUSE_ENABLE_SECURITY_DOWNLOAD[];
extern const esp_efuse_desc_t* ESP_EFUSE_UART_PRINT_CONTROL[];
extern const esp_efuse_desc_t* ESP_EFUSE_FORCE_SEND_RESUME[];
extern const esp_efuse_desc_t* ESP_EFUSE_SECURE_VERSION[];
extern const esp_efuse_desc_t* ESP_EFUSE_SECURE_BOOT_DISABLE_FAST_WAKE[];
extern const esp_efuse_desc_t* ESP_EFUSE_HYS_EN_PAD[];
extern const esp_efuse_desc_t* ESP_EFUSE_DCDC_VSET[];
extern const esp_efuse_desc_t* ESP_EFUSE__0PXA_TIEH_SEL_0[];
extern const esp_efuse_desc_t* ESP_EFUSE__0PXA_TIEH_SEL_1[];
extern const esp_efuse_desc_t* ESP_EFUSE__0PXA_TIEH_SEL_2[];
extern const esp_efuse_desc_t* ESP_EFUSE__0PXA_TIEH_SEL_3[];
extern const esp_efuse_desc_t* ESP_EFUSE_USB_DEVICE_DREFL[];
extern const esp_efuse_desc_t* ESP_EFUSE_USB_OTG11_DREFL[];
extern const esp_efuse_desc_t* ESP_EFUSE_HP_PWR_SRC_SEL[];
extern const esp_efuse_desc_t* ESP_EFUSE_DCDC_VSET_EN[];
extern const esp_efuse_desc_t* ESP_EFUSE_DIS_WDT[];
extern const esp_efuse_desc_t* ESP_EFUSE_DIS_SWD[];
extern const esp_efuse_desc_t* ESP_EFUSE_MAC_FACTORY[];
extern const esp_efuse_desc_t* ESP_EFUSE_MAC_EXT[];
extern const esp_efuse_desc_t* ESP_EFUSE_WAFER_VERSION_MINOR[];
extern const esp_efuse_desc_t* ESP_EFUSE_PKG_VERSION[];
extern const esp_efuse_desc_t* ESP_EFUSE_BLK_VERSION_MINOR[];
extern const esp_efuse_desc_t* ESP_EFUSE_OPTIONAL_UNIQUE_ID[];
extern const esp_efuse_desc_t* ESP_EFUSE_BLK_VERSION_MAJOR[];
extern const esp_efuse_desc_t* ESP_EFUSE_TEMP_CALIB[];
extern const esp_efuse_desc_t* ESP_EFUSE_OCODE[];
extern const esp_efuse_desc_t* ESP_EFUSE_ADC1_INIT_CODE_ATTEN0[];
extern const esp_efuse_desc_t* ESP_EFUSE_ADC1_INIT_CODE_ATTEN1[];
extern const esp_efuse_desc_t* ESP_EFUSE_ADC1_INIT_CODE_ATTEN2[];
extern const esp_efuse_desc_t* ESP_EFUSE_ADC1_INIT_CODE_ATTEN3[];
extern const esp_efuse_desc_t* ESP_EFUSE_ADC1_CAL_VOL_ATTEN0[];
extern const esp_efuse_desc_t* ESP_EFUSE_ADC1_CAL_VOL_ATTEN1[];
extern const esp_efuse_desc_t* ESP_EFUSE_ADC1_CAL_VOL_ATTEN2[];
extern const esp_efuse_desc_t* ESP_EFUSE_ADC1_CAL_VOL_ATTEN3[];
extern const esp_efuse_desc_t* ESP_EFUSE_USER_DATA[];
extern const esp_efuse_desc_t* ESP_EFUSE_USER_DATA_MAC_CUSTOM[];
extern const esp_efuse_desc_t* ESP_EFUSE_KEY0[];
extern const esp_efuse_desc_t* ESP_EFUSE_KEY1[];
extern const esp_efuse_desc_t* ESP_EFUSE_KEY2[];
extern const esp_efuse_desc_t* ESP_EFUSE_KEY3[];
extern const esp_efuse_desc_t* ESP_EFUSE_KEY4[];
extern const esp_efuse_desc_t* ESP_EFUSE_KEY5[];
extern const esp_efuse_desc_t* ESP_EFUSE_SYS_DATA_PART2[];
extern const esp_efuse_desc_t* ESP_EFUSE_K_RTC_LDO[];
extern const esp_efuse_desc_t* ESP_EFUSE_K_DIG_LDO[];
extern const esp_efuse_desc_t* ESP_EFUSE_V_RTC_DBIAS20[];
extern const esp_efuse_desc_t* ESP_EFUSE_V_DIG_DBIAS20[];
extern const esp_efuse_desc_t* ESP_EFUSE_DIG_DBIAS_HVT[];
extern const esp_efuse_desc_t* ESP_EFUSE_THRES_HVT[];

#ifdef __cplusplus
}
#endif
