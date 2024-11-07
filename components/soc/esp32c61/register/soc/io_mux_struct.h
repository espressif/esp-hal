/**
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

/** Group: Configuration Registers */
/** Type of gpion register
 *  IO MUX configuration register for GPIOn
 */
typedef union {
    struct {
        /** gpion_mcu_oe : R/W; bitpos: [0]; default: 0;
         *  Configures whether or not to enable the output of GPIOn in sleep mode.
         *  0: Disable\\
         *  1: Enable\\
         */
        uint32_t gpion_mcu_oe:1;
        /** gpion_slp_sel : R/W; bitpos: [1]; default: 0;
         *  Configures whether or not to enter sleep mode for GPIOn.\\
         *  0: Not enter\\
         *  1: Enter\\
         */
        uint32_t gpion_slp_sel:1;
        /** gpion_mcu_wpd : R/W; bitpos: [2]; default: 0;
         *  Configure whether or not to enable pull-down resistor of GPIOn in sleep mode.\\
         *  0: Disable\\
         *  1: Enable\\
         */
        uint32_t gpion_mcu_wpd:1;
        /** gpion_mcu_wpu : R/W; bitpos: [3]; default: 0;
         *  Configures whether or not to enable pull-up resistor of GPIOn during sleep mode. \\
         *  0: Disable\\
         *  1: Enable\\
         */
        uint32_t gpion_mcu_wpu:1;
        /** gpion_mcu_ie : R/W; bitpos: [4]; default: 0;
         *  Configures whether or not to enable the input of GPIOn during sleep mode.\\
         *  0: Disable\\
         *  1: Enable\\
         */
        uint32_t gpion_mcu_ie:1;
        /** gpion_mcu_drv : R/W; bitpos: [6:5]; default: 0;
         *  Configures the drive strength of GPIOn during sleep mode. \\
         *  0: ~5 mA\\
         *  1: ~10 mA\\
         *  2: ~20 mA\\
         *  3: ~40 mA\\
         */
        uint32_t gpion_mcu_drv:2;
        /** gpion_fun_wpd : R/W; bitpos: [7]; default: 0;
         *  Configures whether or not to enable pull-down resistor of GPIOn.\\
         *  0: Disable\\
         *  1: Enable\\
         */
        uint32_t gpion_fun_wpd:1;
        /** gpion_fun_wpu : R/W; bitpos: [8]; default: 0;
         *  Configures whether or not enable pull-up resistor of GPIOn.\\
         *  0: Disable\\
         *  1: Enable\\
         */
        uint32_t gpion_fun_wpu:1;
        /** gpion_fun_ie : R/W; bitpos: [9]; default: 0;
         *  Configures whether or not to enable input of GPIOn.\\
         *  0: Disable\\
         *  1: Enable\\
         */
        uint32_t gpion_fun_ie:1;
        /** gpion_fun_drv : R/W; bitpos: [11:10]; default: 2;
         *  Configures the drive strength of GPIOn. \\
         *  0: ~5 mA\\
         *  1: ~10 mA\\
         *  2: ~20 mA\\
         *  3: ~40 mA\\
         */
        uint32_t gpion_fun_drv:2;
        /** gpion_mcu_sel : R/W; bitpos: [14:12]; default: 1;
         *  Configures to select IO MUX function for this signal. \\
         *  0: Select Function 0\\
         *  1: Select Function 1\\
         *  ......\\
         */
        uint32_t gpion_mcu_sel:3;
        /** gpion_filter_en : R/W; bitpos: [15]; default: 0;
         *  Configures whether or not to enable filter for pin input signals.\\
         *  0: Disable\\
         *  1: Enable\\
         */
        uint32_t gpion_filter_en:1;
        /** gpion_hys_en : R/W; bitpos: [16]; default: 0;
         *  Configures whether or not to enable the hysteresis function of the pin when
         *  IO_MUX_GPIOn_HYS_SEL is set to 1.\\
         *  0: Disable\\
         *  1: Enable\\
         */
        uint32_t gpion_hys_en:1;
        /** gpion_hys_sel : R/W; bitpos: [17]; default: 0;
         *  Configures to choose the signal for enabling the hysteresis function for GPIOn. \\
         *  0: Choose the output enable signal of eFuse, there is no efuse bit for it, should never set to 0\\
         *  1: Choose the output enable signal of IO_MUX_GPIOn_HYS_EN, always set to 1\\
         */
        uint32_t gpion_hys_sel:1;
        uint32_t reserved_18:14;
    };
    uint32_t val;
} io_mux_gpion_reg_t;


/** Group: Version Register */
/** Type of date register
 *  Version control register
 */
typedef union {
    struct {
        /** reg_date : R/W; bitpos: [27:0]; default: 36774288;
         *  Version control register
         */
        uint32_t reg_date:28;
        uint32_t reserved_28:4;
    };
    uint32_t val;
} io_mux_date_reg_t;


typedef struct {
    volatile io_mux_gpion_reg_t gpion[25];
    uint32_t reserved_064[102];
    volatile io_mux_date_reg_t date;
} io_mux_dev_t;

extern io_mux_dev_t IO_MUX;

#ifndef __cplusplus
_Static_assert(sizeof(io_mux_dev_t) == 0x200, "Invalid size of io_mux_dev_t structure");
#endif

#ifdef __cplusplus
}
#endif
