/*
 * sdcard_audio.h
 *
 *  Created on: Aug 20, 2024
 *      Author: ched
 */

#ifndef INC_SDCARD_AUDIO_H_
#define INC_SDCARD_AUDIO_H_

#include "stm32f4xx_hal.h"

#include "fatfs.h"
#include "stdarg.h"
#include "string.h"
#include <stdio.h>

void myprintf(const char *fmt, ...);

void sdcard_init(void);

void sdcard_prepare_wav_file(uint32_t freq, uint8_t *data, uint16_t data_size);

void sdcard_close_wav_file(void);

void sdcard_wav_write(uint8_t *data, uint16_t data_size);

void sdcard_clear_files(FILINFO *file_info);

#endif /* INC_SDCARD_AUDIO_H_ */
