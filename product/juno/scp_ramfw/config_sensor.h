/*
 * Arm SCP/MCP Software
 * Copyright (c) 2020, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef CONFIG_SENSOR_H
#define CONFIG_SENSOR_H

/* Sensor indices for Juno */
enum mod_juno_sensor_element_idx {
    /* ADC sensors */
    MOD_JUNO_SENSOR_AMPS_SYS_IDX = 0,
    MOD_JUNO_SENSOR_AMPS_BIG_IDX,
    MOD_JUNO_SENSOR_AMPS_LITTLE_IDX,
    MOD_JUNO_SENSOR_AMPS_GPU_IDX,
    MOD_JUNO_SENSOR_VOLT_SYS_IDX,
    MOD_JUNO_SENSOR_VOLT_BIG_IDX,
    MOD_JUNO_SENSOR_VOLT_LITTLE_IDX,
    MOD_JUNO_SENSOR_VOLT_GPU_IDX,
    MOD_JUNO_SENSOR_WATT_SYS_IDX,
    MOD_JUNO_SENSOR_WATT_BIG_IDX,
    MOD_JUNO_SENSOR_WATT_LITTLE_IDX,
    MOD_JUNO_SENSOR_WATT_GPU_IDX,
    MOD_JUNO_SENSOR_JOULE_SYS_IDX,
    MOD_JUNO_SENSOR_JOULE_BIG_IDX,
    MOD_JUNO_SENSOR_JOULE_LITTLE_IDX,
    MOD_JUNO_SENSOR_JOULE_GPU_IDX,

    /* XRP7724 sensors */
    MOD_JUNO_SENSOR_XRP7724_PMIC_TEMP_IDX,

    /* Number of sensors */
    MOD_JUNO_SENSOR_IDX_COUNT
};

#endif /* CONFIG_SENSOR_H */
