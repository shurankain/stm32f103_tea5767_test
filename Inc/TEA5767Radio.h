/*
 * TEA5767Radio.h
 *
 *  Created on: Jan 6, 2019
 *      Author: shuran
 */

#include <i2c.h>

#ifndef TEA5767RADIO_H_
#define TEA5767RADIO_H_

#define TEA_ADDR (0x60 << 1)

void setFrequency(float frequency);

#endif /* TEA5767RADIO_H_ */
