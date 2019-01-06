/*
 * TEA5767Radio.c
 *
 *  Created on: Jan 6, 2019
 *      Author: shuran
 */
#include <TEA5767Radio.h>

void setFrequency(float frequency) {
	unsigned int frequencyB = 4 * (frequency * 1000000 + 225000) / 32768;
	uint8_t data_arr[5];
		data_arr[0] = frequencyB >> 8;
		data_arr[1] = frequencyB & 0XFF;
		data_arr[2] = 0xB0;
		data_arr[3] = 0x10;
		data_arr[4] = 0x00;
		HAL_I2C_Master_Transmit(&hi2c1, TEA_ADDR, data_arr, sizeof(data_arr),
			HAL_MAX_DELAY);
	HAL_Delay(100);
}

