/*
 * bitmaps.c
 *
 *  Created on: 4 lip 2015
 *      Author: Piter
 */

#include <avr/pgmspace.h>

#include "sh1106.h"


const uint8_t ciri[lenght] PROGMEM =
{
	0xFF,0xD7,0x4E,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xFE,0xFF,0xE3,0xD5,0xBF,0xFD,
	0xFF,0xFF,0xD6,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xF8,0xE7,0xFF,
	0xFF,0xBE,0xE8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0x7F,0x9F,0xFF,0x5F,0x28,0xFF,
	0xFE,0x7F,0xD4,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xDB,0xFF,0xF7,0xF3,0x77,
	0xFE,0x2B,0xA1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0x7F,0xF4,0xBF,0xBF,
	0xFF,0x1F,0xE0,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0x9F,0xFD,0x17,0xFC,
	0xFF,0xBF,0xC0,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x76,0x7F,0xCE,0xFF,0x48,0x3F,
	0xFF,0x9F,0x83,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xAF,0xF7,0xFF,0xB0,0x7F,
	0xFF,0x8A,0xC0,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0xFF,0xE9,0xFF,0xFF,0x7F,
	0xFF,0xBF,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC5,0xFD,0xFE,0xEF,0xEF,0x9F,
	0xFF,0xAF,0xE0,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0xBE,0x7F,0x3F,0xFF,0xBF,
	0xFF,0xFF,0xE2,0xE0,0x0F,0xFF,0xFF,0xFF,0xFF,0xFE,0x01,0xEF,0x9F,0x79,0xFF,0xCF,
	0xFF,0xFF,0xF0,0xB0,0x00,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0xF1,0xEF,0xFB,0xFF,0xF7,
	0xFF,0xFF,0xF0,0xFC,0x00,0x0F,0xFF,0xFF,0xFE,0xE0,0x00,0x38,0x3D,0xFD,0xFF,0xF9,
	0xFF,0xEF,0xF2,0x70,0x00,0x01,0xFF,0xFF,0xF0,0x50,0x00,0x0E,0x1E,0x3F,0x77,0xFE,
	0xFF,0xEE,0xF0,0xA0,0x00,0x00,0x3F,0xFF,0xC0,0x24,0x20,0x03,0xE1,0xFA,0xCD,0xFF,
	0xFF,0xCF,0xF0,0xA0,0x00,0x00,0x3F,0xFF,0xC0,0x24,0x20,0x03,0xE1,0xFA,0xD1,0xFF,
	0xFF,0xDF,0xE0,0x00,0x00,0x00,0x0F,0xFE,0x00,0x12,0x0B,0x00,0x7E,0x7F,0xF8,0x7F,
	0xFF,0xFF,0xE2,0x80,0x00,0x40,0x07,0xFC,0x00,0x04,0x83,0x80,0x07,0xFF,0xFD,0xFF,
	0xFF,0xFF,0xE2,0x80,0x40,0x00,0x03,0xFE,0x00,0x63,0x1B,0xE0,0x00,0xFF,0xFF,0xBF,
	0xFF,0xFF,0x99,0xC0,0x60,0x0C,0x03,0xFC,0x00,0x80,0xD7,0x0C,0x02,0xFF,0xFF,0xDF,
	0xFE,0xF7,0xC1,0xE0,0x10,0xD8,0x01,0xFE,0x00,0x00,0x3C,0x35,0xFF,0xD2,0x3F,0xAF,
	0xFE,0xFB,0x61,0xF0,0x18,0x20,0x23,0xFE,0x07,0x80,0x03,0x85,0xFF,0x00,0xBF,0xB7,
	0xFF,0x7F,0xC1,0xF0,0x00,0x01,0xFD,0xFE,0x0F,0xD0,0x00,0x1F,0xFC,0x00,0x9F,0x0B,
	0xFF,0xDB,0xC1,0xF4,0x00,0x07,0xFF,0xFE,0x7F,0xF8,0x00,0x07,0xF0,0x00,0xBF,0x1D,
	0xFF,0xBB,0xC1,0xFE,0x00,0x3F,0xFF,0xFE,0x7F,0xFC,0x00,0x7F,0xD0,0x00,0x9F,0x83,
	0xFF,0xFD,0xC3,0xFF,0xF8,0xFF,0xFF,0xFE,0x7F,0xFF,0xB9,0x3F,0xE0,0x00,0x9D,0x85,
	0xFF,0xB5,0xC3,0xFF,0xF8,0xFF,0xFF,0xFE,0x7F,0xFF,0xF8,0xBF,0xD0,0x00,0x37,0xA7,
	0xFF,0xD6,0xF1,0xFF,0xFC,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xF0,0x08,0x37,0xA3,
	0xFF,0xFF,0xF1,0xFF,0xFC,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xE0,0x00,0x7F,0xBB,
	0xFF,0xEB,0xE0,0xFF,0xFE,0xFF,0xFF,0xFF,0xBF,0xFF,0xFF,0xFF,0xC2,0x0C,0x7F,0x94,
	0xFF,0xFA,0xE1,0xFF,0xFF,0x7F,0xFF,0xFF,0xBF,0xFF,0xFF,0xFF,0xC0,0x00,0x4F,0xE5,
	0xFF,0xEE,0x74,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,0xFF,0xDF,0xC5,0x02,0x5F,0xDA,
	0xFF,0xEF,0x72,0xFF,0xFF,0xFF,0xFF,0xFF,0x9F,0xFF,0xFF,0xEF,0xC2,0x04,0x37,0xCB,
	0xFF,0xFF,0x68,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF6,0x08,0x06,0x37,0xD5,
	0x7F,0xEF,0x78,0x3F,0xFF,0xFF,0xFF,0xFF,0xBF,0xFF,0xFF,0xFF,0xB8,0x06,0xB7,0xE7,
	0x7F,0xFF,0x5C,0x3F,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xF8,0x04,0x02,0x67,0xE5,
	0x3F,0xFF,0xBE,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x08,0x03,0x17,0xE1,
	0x1F,0xFF,0xBE,0x1F,0xFF,0xFF,0xFF,0xFF,0xBF,0xFF,0xFF,0xFC,0x4E,0x02,0x12,0xF2,
	0x1F,0xFF,0xF5,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF1,0x90,0x03,0x33,0xF7,
	0x0F,0xFF,0xAE,0x4F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xF9,0xE8,0x03,0x5B,0xF8,
	0x87,0xFF,0xFB,0xAF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF2,0x48,0x03,0x9B,0xF9,
	0xC3,0xFF,0xED,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE5,0xB0,0x00,0xEB,0xFC,
	0xC3,0xFF,0x9D,0x77,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFE,0x60,0x03,0x8E,0xFE,
	0xE1,0xF7,0xBE,0xF3,0xFF,0xDF,0xF7,0xFF,0xCF,0xFF,0xFF,0xD3,0xC0,0x00,0x7F,0xEF,
	0xF0,0xF7,0xBB,0xC9,0xFF,0xFF,0xFF,0xFE,0x27,0xFF,0xFF,0x91,0xC0,0x0B,0xF5,0xFF,
	0x70,0xF7,0xEF,0xE1,0xFF,0xFF,0xF5,0xFD,0x07,0xFF,0xFF,0xFA,0x00,0x02,0x23,0xFF,
	0x70,0x77,0xFF,0x54,0x7F,0xFF,0xF8,0xF8,0x07,0xFF,0xFF,0xC8,0x00,0x01,0xF9,0xFD,
	0x70,0x77,0xFF,0x54,0x7F,0xFF,0xF8,0x78,0x0F,0xFF,0xFF,0xC8,0x00,0x01,0xF9,0xFD,
	0x63,0x7F,0xDD,0xA8,0x3F,0xFF,0xF8,0x20,0x1F,0xFF,0xFF,0x26,0x00,0x01,0xDD,0xFE,
	0x46,0x7F,0xF7,0xD4,0x1F,0x7F,0xFE,0x00,0x3F,0xFF,0xFE,0x8A,0x00,0x00,0xDF,0xBF,
	0x00,0x7B,0xFB,0x44,0x1F,0xFF,0xFE,0x00,0x7F,0xFF,0xFF,0x4C,0x00,0x01,0xAD,0xDF,
	0x00,0x39,0xFF,0xE0,0x1F,0xFF,0xFF,0xC1,0xFF,0xFF,0xFF,0x10,0x00,0x00,0x7F,0x4F,
	0x00,0x1F,0xFF,0xC0,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x81,0x6F,0xAF,
	0x00,0x1F,0xFD,0xF0,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xF2,0x00,0x00,0x01,0x39,0xEF,
	0x01,0x0C,0xFE,0x28,0x47,0xFF,0xFF,0xFF,0xFF,0xFF,0xF2,0x00,0x00,0x80,0x9E,0xF7,
	0x00,0x05,0xFC,0x08,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x01,0x01,0x7F,0xF3,
	0x00,0x03,0xFE,0x79,0xC7,0xFF,0xFE,0x00,0x7F,0xFF,0xF0,0x00,0x00,0x00,0xB6,0xFF,
	0x00,0x0F,0xFF,0x7F,0xC5,0xFF,0xF0,0x00,0x07,0xFF,0xF0,0x00,0x02,0x00,0x47,0xF7,
	0xFF,0xFF,0xFF,0xFF,0xF1,0xFF,0xC0,0x00,0x00,0x1F,0xE0,0x00,0x00,0x00,0x37,0xFB,
	0xFF,0xFD,0x3F,0xF7,0xFC,0x7E,0x00,0x1C,0x00,0x1F,0xC0,0x00,0x04,0x04,0x1E,0xFF,
	0xFF,0xFE,0x3F,0xFF,0xDF,0x7F,0xE0,0xFF,0xC0,0xFF,0x80,0x00,0x00,0x40,0xF7,0xFF,
	0xFF,0xEC,0x3F,0xFF,0xEF,0xBF,0xF8,0x7F,0x81,0xFF,0x00,0x00,0x00,0x40,0x11,0xFF,
	0xFF,0xD8,0x1F,0xFF,0xE7,0x9F,0xFC,0x08,0x07,0xFF,0x00,0x00,0x00,0x80,0x5F,0xFF,
};


const uint8_t moja_ciri[lenght] PROGMEM = {
	0x00,0x00,0x00,0x00,0x01,0xFD,0x7C,0xFF,0xFF,0xFE,0xFF,0xFE,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x13,0xFF,0xFD,0xE0,0xBF,0xE7,0xFF,0xDF,0x80,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xCC,0xBF,0xED,0xFF,0xFF,0x80,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x3F,0xFE,0x0E,0x9F,0xFC,0x5F,0xFF,0xFF,0x80,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x29,0x7F,0x8F,0xDE,0x33,0xBF,0xFC,0xFF,0xC0,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x0E,0xDF,0x33,0xBE,0xF9,0xF5,0xFE,0x6F,0xA0,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x0F,0xFF,0x3F,0xFF,0xFA,0x3F,0xFF,0xA7,0xF0,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x2F,0x37,0xDF,0xFF,0xF8,0x8F,0xDF,0xFE,0x50,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x7E,0x70,0x7F,0xFF,0xFE,0x1B,0x4F,0xFB,0x48,0x00,0x00,0x00,
	0x00,0x00,0x00,0x04,0xDD,0xDF,0xFF,0xFF,0xFD,0xBF,0xF7,0xFF,0x68,0x00,0x00,0x00,
	0x00,0x00,0x00,0x01,0xBF,0xFD,0xFF,0xFF,0xEF,0xBD,0xFF,0xFF,0xB8,0x00,0x00,0x00,
	0x00,0x00,0x00,0x01,0x3F,0xBB,0xFF,0xFF,0xEF,0xFE,0x3F,0xFF,0xB4,0x00,0x00,0x00,
	0x00,0x00,0x00,0x01,0x7F,0x3B,0xFF,0xFF,0xE9,0xFF,0xFF,0xCF,0xFC,0x00,0x00,0x00,
	0x00,0x00,0x00,0x02,0x77,0x73,0xFF,0xFF,0xFF,0xBF,0xCD,0xEF,0xE8,0x00,0x00,0x00,
	0x00,0x00,0x00,0x03,0xFE,0x77,0xFF,0xFF,0xFD,0xBF,0xE7,0xFF,0x7C,0x00,0x00,0x00,
	0x00,0x00,0x00,0x01,0xCE,0xFF,0xFF,0xFF,0xFD,0x7F,0xFF,0x7F,0xFC,0x00,0x00,0x00,
	0x00,0x00,0x00,0x01,0xCE,0xFF,0xFF,0xFF,0xEB,0x5F,0xFF,0x6F,0xBC,0x00,0x00,0x00,
	0x00,0x00,0x00,0x03,0xCF,0xFF,0xFF,0xFF,0xF3,0x9F,0xF6,0xFD,0xFC,0x00,0x00,0x00,
	0x00,0x00,0x00,0x03,0x9E,0xEF,0xFF,0xFF,0xC0,0x5F,0xF9,0xAF,0xFA,0x00,0x00,0x00,
	0x00,0x00,0x00,0x16,0x7F,0xF0,0xFF,0xFD,0x01,0x07,0xFB,0x7F,0xFA,0x00,0x00,0x00,
	0x00,0x00,0x00,0x17,0xA7,0xE0,0x0F,0xF8,0x03,0xD3,0xFC,0x5F,0xFE,0x00,0x00,0x00,
	0x00,0x00,0x00,0x0D,0xE7,0xC0,0x0B,0xF8,0x04,0xCF,0xF0,0xDF,0xFC,0x00,0x00,0x00,
	0x00,0x00,0x00,0x05,0xC7,0xC0,0x03,0xF0,0x00,0x1F,0xF7,0xDF,0xBE,0x00,0x00,0x00,
	0xC0,0x00,0x00,0x1B,0x07,0xE0,0x81,0xF0,0x08,0x0F,0xEA,0xDF,0xFF,0x80,0x00,0x00,
	0xE0,0x00,0x00,0x12,0x47,0xC0,0x00,0xE0,0x40,0x07,0xFA,0xDF,0xFE,0xC0,0x00,0x00,
	0xB0,0x00,0x00,0x04,0x03,0x40,0xC1,0xF8,0x76,0x07,0xEA,0xDF,0xBF,0x80,0x00,0x00,
	0xFC,0x00,0x00,0x04,0x01,0x80,0x03,0xFA,0x00,0x1F,0xEC,0xDD,0xFD,0x40,0x00,0x00,
	0xFE,0x00,0x00,0x06,0x21,0x00,0x0F,0xFE,0x01,0xFF,0xE8,0xDF,0xB5,0x00,0x00,0x00,
	0xFF,0x00,0x00,0x0C,0x00,0xD4,0x3D,0xFF,0x81,0xF7,0xFA,0xFF,0x35,0x80,0x00,0x00,
	0x6F,0x80,0x00,0x04,0x01,0x5E,0x3F,0xFF,0xED,0xFF,0xE8,0xEF,0x35,0x80,0x00,0x00,
	0x3F,0xE0,0x00,0x10,0x00,0x5E,0x7B,0xFF,0xFD,0xFF,0xE9,0xEF,0x74,0x80,0x00,0x00,
	0x17,0xF0,0x00,0x10,0x00,0xDE,0x7F,0xFF,0xFE,0xFF,0xE3,0xEF,0xFD,0x80,0x00,0x00,
	0x01,0xB8,0x00,0x10,0x00,0xDE,0x7F,0xFF,0xFE,0x7D,0xE3,0xEF,0x7C,0xC0,0x00,0x00,
	0x0E,0xFE,0x00,0x10,0x00,0xDE,0xF3,0xFF,0xFF,0x79,0xEB,0xFF,0x7C,0x40,0x00,0x00,
	0x07,0xFE,0x00,0x10,0x00,0xFF,0x77,0xF7,0xFF,0x9F,0xC8,0xF7,0x7C,0x00,0x00,0x00,
	0x02,0x7F,0x00,0x18,0x00,0xBF,0xFF,0xF7,0xFF,0x87,0xC8,0xFF,0xFC,0x80,0x00,0x00,
	0x01,0x7F,0x80,0x18,0x00,0x9F,0xE2,0x07,0xEF,0xC3,0xC8,0xFF,0xFD,0xC0,0x00,0x00,
	0x00,0xFF,0xC0,0x00,0x01,0xDF,0xE0,0x07,0xDF,0xE1,0x88,0xF7,0xF8,0x20,0x00,0x00,
	0x00,0x5E,0xE0,0x00,0x03,0xAD,0xE0,0x0F,0x9F,0xF0,0x0C,0xDF,0xF8,0x20,0x00,0x00,
	0x00,0x67,0xF0,0x00,0x0F,0x4C,0xF0,0x9F,0xF3,0xF2,0x00,0xBF,0xFD,0x00,0x00,0x00,
	0x00,0x3F,0x78,0x00,0x7B,0xCF,0xFF,0xFF,0x8F,0xF8,0x01,0x7F,0x79,0x00,0x00,0x00,
	0x00,0x1B,0xFC,0x00,0x7F,0x9F,0xFF,0xFF,0x1F,0x4C,0x00,0x5B,0x3F,0x00,0x00,0x00,
	0x00,0x0C,0xFE,0x07,0xFF,0xB7,0xFF,0xFF,0xFF,0x1C,0x04,0x5B,0x7F,0x00,0x00,0x00,
	0x00,0x07,0x7F,0x07,0x99,0x43,0xFC,0x7F,0xFF,0xFF,0x84,0x6E,0xEF,0x00,0x00,0x00,
	0x00,0x03,0x7F,0x8C,0x40,0x83,0xE0,0x07,0xFF,0xFC,0x88,0x26,0x5F,0x00,0x00,0x00,
	0x00,0x01,0xDF,0xF9,0xB3,0x03,0xE0,0x00,0x0F,0xFD,0x04,0x26,0xFF,0x00,0x00,0x00,
	0x00,0x00,0x7F,0xF2,0x42,0x03,0xD0,0x00,0x3F,0xF8,0x04,0x36,0xFE,0x40,0x00,0x00,
	0x00,0x00,0x27,0xFF,0xC2,0x03,0xC0,0x12,0x7F,0xFC,0x08,0x27,0xEE,0x00,0x00,0x00,
	0x00,0x00,0x27,0xFF,0xC2,0x03,0xC0,0x07,0xFF,0xFC,0x00,0x17,0x3E,0x00,0x00,0x00,
	0x00,0x00,0x33,0xFF,0x86,0x01,0xFE,0x73,0xFD,0xF8,0x00,0x13,0x9E,0x00,0x00,0x00,
	0x00,0x00,0x19,0xFF,0x86,0x01,0xF9,0xCF,0xFF,0xE0,0x08,0x12,0x9E,0x00,0x00,0x00,
	0x00,0x00,0x0E,0xFF,0xDE,0x00,0xF8,0xFF,0xFF,0xC0,0x0F,0xF2,0x9A,0x00,0x00,0x00,
	0x00,0x00,0x05,0xFD,0xFE,0x08,0xFF,0xF7,0xFE,0x80,0x74,0x1C,0xDE,0x00,0x00,0x00,
	0x00,0x00,0x03,0xF9,0xF6,0x18,0x2F,0xFF,0xD8,0x00,0x20,0x0E,0xDE,0x00,0x00,0x00,
	0x00,0x00,0x07,0xE5,0xDE,0x10,0x3F,0xFF,0xE0,0x00,0x40,0x0A,0xD3,0x80,0x00,0x00,
	0x00,0x00,0x1F,0xFB,0xB6,0x10,0x3F,0xFF,0xC0,0x01,0x00,0x0B,0x33,0xC0,0x00,0x00,
	0x00,0x00,0x3E,0xE3,0xB7,0x1C,0x1F,0xFF,0x80,0x06,0x00,0x01,0x29,0x60,0x00,0x00,
	0x00,0x00,0x39,0x87,0xF6,0x04,0x0F,0xFF,0x00,0x11,0x10,0x03,0xB5,0x20,0x00,0x00,
	0x00,0x00,0x73,0x06,0x7F,0x02,0x07,0xF0,0x00,0x00,0x18,0x00,0x10,0x0C,0x00,0x00,
	0x00,0x00,0x66,0x05,0xE7,0x02,0x00,0x00,0x00,0x50,0x00,0x00,0x80,0x04,0x00,0x00,
	0x00,0x00,0xCE,0x02,0x0E,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x08,0x46,0x00,0x00,
	0x00,0x00,0xF8,0x02,0x0A,0x01,0x00,0x00,0x0F,0x00,0x40,0x08,0x08,0x02,0x00,0x00,
	0x00,0x01,0xF0,0x07,0x80,0x04,0x11,0x70,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x03,0xC0,0x1D,0x9B,0x00,0x00,0x00,0x00,0x00,0x18,0x08,0x02,0x00,0x00,0x00,
};


const uint8_t tombraider[lenght] PROGMEM = {
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0xF5,0xFF,0xFF,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0xFC,0x7F,0xFF,0xFF,0xFF,0xFE,
			0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xFE,0x1F,0xFF,0xFF,0xFF,0xFE,
			0xFF,0xFF,0xFF,0xFF,0x87,0xFF,0xFF,0xFF,0xFF,0xBF,0xFF,0xC7,0xFF,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0xFE,0x02,0x3F,0xFF,0xFF,0xFE,0x7F,0xFF,0xF1,0xFF,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0xF8,0x08,0x1F,0xFF,0xFF,0xFD,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0xF8,0x00,0x2F,0xFF,0xFF,0xF7,0xFF,0xFF,0xFE,0x07,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0xE8,0x00,0x27,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xE0,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0xE0,0x00,0x5B,0xFF,0xFF,0xDF,0xFF,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,
			0xFF,0xFF,0xFF,0x80,0x00,0x0B,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0x87,0xFF,0xFF,
			0xFF,0xFF,0xFF,0x20,0x00,0x23,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xE5,0xFF,0xFF,
			0xFF,0xFF,0xFF,0x80,0x00,0x0D,0xFF,0xFB,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,
			0xFF,0xFF,0xFF,0x20,0x00,0x03,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x9F,0xFF,
			0xFF,0xFF,0xFF,0x80,0x00,0x03,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0xFF,
			0xFF,0xFF,0xFF,0x00,0x00,0x01,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0xFF,
			0xFF,0xFF,0xFF,0x00,0x00,0x19,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE7,0xFF,
			0xFF,0xFF,0xFF,0x00,0x00,0x19,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE7,0xFF,
			0xFF,0xFF,0xFF,0x00,0x00,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0xFF,
			0xFF,0xFF,0xFF,0x00,0x00,0x09,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0xFF,
			0xFF,0xFF,0xFF,0x00,0x00,0x0D,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF1,0xFF,
			0xFF,0xFF,0xFF,0x80,0x00,0x1D,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,
			0xFF,0xFF,0xFF,0x00,0x00,0x04,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF5,0xFF,
			0xFF,0xFF,0xFF,0x80,0x00,0x1D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0xFF,
			0xFF,0xFF,0xFF,0x80,0x00,0x13,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0xFF,
			0xFF,0xFF,0xFF,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,
			0xFF,0xFF,0xFF,0x24,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,
			0x81,0xFF,0xE0,0x80,0x00,0x07,0xFE,0xD9,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,
			0x00,0x00,0x00,0x00,0x00,0x0E,0x20,0x2F,0x82,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x82,
			0x00,0x00,0x00,0x00,0x00,0x0A,0x00,0x45,0x40,0x7F,0xFF,0xF5,0x81,0x00,0x00,0x0F,
			0x00,0x00,0x00,0x00,0x00,0x02,0xD0,0x00,0x62,0x00,0x00,0x01,0xFF,0xFF,0xC0,0x7F,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x40,0x01,0x8F,0xFF,0x90,0x7F,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x04,0x43,0x10,0x3F,
			0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,
			0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,
			0x00,0x00,0x00,0x00,0x00,0x01,0x40,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x1F,
			0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0xC0,0x00,0x00,0x00,0x00,0x7F,
			0xDF,0xFF,0xF0,0x00,0x00,0x02,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0x0D,0x7F,
			0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x7F,
			0xFF,0xFF,0xFE,0x00,0x20,0x00,0x20,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x7F,
			0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x7F,
			0xFF,0xFF,0xFE,0x80,0x01,0x80,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x7F,
			0xFF,0xFF,0xFE,0x40,0x00,0x80,0x09,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x7F,
			0xFF,0xFF,0xFE,0x40,0x00,0x80,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x7F,
			0xFF,0xFF,0xFE,0xC0,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x7F,
			0xFF,0xFF,0xFE,0xC0,0x00,0x00,0x06,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,
			0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x07,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,
			0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x07,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0xFF,
			0xFF,0xFF,0xFF,0x80,0x00,0x00,0x07,0xFB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0xFF,
			0xFF,0xFF,0xFF,0x80,0x00,0x00,0x07,0xFB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0xFF,
			0xFF,0xFF,0xFF,0x80,0x00,0x00,0x0F,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,
			0xFF,0xFF,0xFF,0x80,0x00,0x00,0x07,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xCF,0xFF,
			0xFF,0xFF,0xFF,0x80,0x00,0x00,0x0F,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0x9F,0xFF,
			0xFF,0xFF,0xFE,0xC0,0x00,0x00,0x07,0xFF,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,
			0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x07,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,
			0xFF,0xFF,0xFF,0x60,0x00,0x00,0x07,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,
			0xFF,0xFF,0xFF,0x20,0x00,0x02,0x03,0xFF,0xFF,0xBF,0xFF,0xFF,0xFF,0xFB,0xFF,0xFF,
			0xFF,0xFF,0xFF,0x90,0x00,0x00,0x00,0xFF,0xFF,0xCF,0xFF,0xFF,0xFF,0xE7,0xFF,0xFF,
			0xFF,0xFF,0xFF,0x08,0x00,0x00,0x03,0xFF,0xFF,0xFB,0xFF,0xFF,0xFF,0xCF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0x8C,0x00,0x00,0x11,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xBF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0x86,0x00,0x00,0x46,0xFF,0xFF,0xFF,0xBF,0xFF,0xFF,0x7F,0xFF,0xFF,
			0xFF,0xFF,0xFF,0x87,0xE0,0x00,0x07,0xFF,0xFF,0xFF,0xEF,0xFF,0xFE,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0x87,0xC0,0x00,0x08,0x9F,0xFF,0xFF,0xF7,0xFF,0xFD,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0x87,0xC0,0x00,0x08,0x7F,0xFF,0xFF,0xF9,0xFF,0xFB,0xFF,0xFF,0xFF,
			0xFF,0xFF,0xFF,0xC7,0xE0,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0x7F,0xFB,0xFF,0xFF,0xFF,
};


const uint8_t anime[lenght] PROGMEM = {
	0xE0,0x0F,0xFB,0xA2,0x00,0x5D,0xE6,0x3F,0xE0,0xE1,0xF0,0xFB,0xFE,0x03,0xFF,0xFF,
	0xF0,0x0F,0xFF,0x82,0x01,0x4D,0xF7,0x1F,0xF0,0x70,0xF0,0xFF,0xFE,0x03,0xFF,0xFF,
	0xF0,0x0F,0xFD,0x80,0x01,0x86,0xF7,0x9F,0xF0,0x30,0xF8,0x7D,0xFE,0x03,0xFF,0xFF,
	0x70,0x0F,0xFD,0x80,0x01,0x26,0x7B,0x9F,0xF0,0x1C,0x3C,0x3D,0xFF,0x01,0xFF,0xFF,
	0x78,0x0F,0xFD,0x80,0x01,0x06,0x7B,0x8F,0xF0,0x1C,0x3C,0x3D,0xFF,0x01,0xFF,0xFF,
	0xF8,0x0F,0xFC,0x80,0x00,0xC3,0x2D,0x8F,0xF0,0x0E,0x1C,0x3E,0x7F,0x01,0xFF,0xFF,
	0xBC,0x0F,0xFC,0xC0,0x02,0x03,0xB5,0xC7,0xF0,0x33,0x0E,0x1E,0x7F,0x01,0xFF,0xFF,
	0x9E,0x0F,0xDC,0xC0,0x03,0x01,0x90,0x47,0xF8,0x3D,0x2E,0x1E,0x3F,0x81,0xFF,0xFF,
	0xDE,0x0F,0xDE,0xC0,0x03,0x01,0x9A,0x43,0xF8,0x35,0xA6,0x1E,0x3F,0x81,0xFF,0xFF,
	0xFF,0x0F,0xCE,0x40,0x03,0x91,0xCA,0x23,0xF8,0x3E,0xD2,0x0F,0x9F,0x81,0xFF,0xFF,
	0xEF,0x87,0xCE,0x40,0x07,0x88,0xC5,0x01,0xFC,0x3E,0x21,0x0F,0x9F,0x81,0xFF,0xFF,
	0xFF,0xC7,0xEF,0x60,0x03,0xBC,0x50,0x81,0xFC,0x1E,0xD4,0x0F,0x8F,0xC0,0xFF,0xFF,
	0xF7,0xC7,0xE7,0x60,0x01,0xDC,0x2A,0x00,0xFC,0x1E,0xE1,0x06,0x4F,0xC0,0xFF,0xFF,
	0xF7,0xC7,0xE7,0x20,0x00,0xCE,0x20,0x40,0xFC,0x1F,0xF2,0x02,0x4F,0xE0,0xFF,0xFF,
	0xFF,0xC7,0xE7,0x30,0x00,0x3E,0x15,0x00,0x7C,0x01,0x24,0x03,0xE7,0xE0,0xFF,0xFF,
	0xFB,0xE7,0xF7,0x30,0x00,0x1F,0x98,0x00,0x3E,0x03,0x40,0x03,0xE7,0xE0,0xFF,0xFF,
	0xFB,0xE7,0xF7,0x30,0x00,0x1F,0x98,0x00,0x3E,0x03,0x40,0x03,0xE7,0xE0,0xFF,0xFF,
	0xFB,0xE7,0xF3,0x10,0x00,0x07,0xC2,0x08,0x3E,0x03,0x0F,0xC1,0xA7,0xE0,0xFF,0xFF,
	0xFB,0xE7,0xF3,0x10,0x00,0x03,0xC6,0x00,0x1E,0x02,0x0F,0xE1,0xB7,0xE0,0xFF,0xFF,
	0xFD,0xE3,0xF3,0x98,0x07,0x80,0xE1,0x84,0x1E,0x00,0x0F,0xE1,0xD3,0xF0,0x7F,0xFF,
	0xFD,0xE3,0xF1,0x88,0x1F,0x80,0xB2,0x82,0x0B,0x00,0x0F,0xE1,0xD1,0xF0,0x7F,0xFF,
	0xFD,0xE3,0xF0,0x88,0x1F,0x80,0x18,0x40,0x07,0x06,0x07,0xE2,0x79,0xF0,0x7F,0xFF,
	0xFF,0xE3,0xF0,0x8C,0x3F,0x80,0x24,0x61,0x05,0x1E,0x07,0xE2,0x69,0xF0,0x7F,0xFF,
	0xFF,0xE3,0xF8,0x84,0x3F,0x80,0x68,0x30,0x03,0x8E,0x07,0xE7,0xA8,0xF8,0x7F,0xFF,
	0xFE,0xE3,0xF8,0x04,0x3D,0x20,0x73,0x38,0xC0,0x0C,0x0F,0xEF,0x98,0xF8,0x3F,0xFF,
	0xFE,0xE3,0xF8,0x44,0x1C,0x00,0x79,0x8C,0x21,0xC0,0x0F,0xEE,0x04,0xF8,0x1F,0xFF,
	0xFE,0xE1,0xF8,0x46,0x1C,0x00,0x79,0xC6,0x30,0xC0,0x0F,0xEE,0x04,0x78,0x1F,0xFF,
	0xFE,0xE1,0xF8,0x03,0x9E,0x00,0x7B,0xE3,0x1C,0x60,0x0F,0xDE,0x06,0x7C,0x0F,0xFF,
	0xFE,0xE1,0xFC,0x03,0x9E,0x00,0x7B,0xF7,0xCE,0x20,0x1F,0xDC,0x02,0x7C,0x07,0xFF,
	0xFE,0xE0,0xFC,0x05,0x9F,0x00,0x7F,0xFF,0xEF,0x10,0x1F,0xBC,0x01,0x3E,0x03,0xFF,
	0xFE,0xC0,0xFC,0x01,0x9F,0x80,0xFF,0xFD,0xF7,0xD0,0x3F,0xDC,0x01,0x3E,0x03,0xFF,
	0xFE,0xC0,0xFC,0x00,0x4F,0x81,0xFF,0xFE,0xFF,0xE4,0x7F,0x9C,0x00,0x1E,0x01,0xFF,
	0xFE,0xC0,0xFC,0x02,0x47,0xC3,0xFF,0xFF,0xFF,0xFF,0xFF,0x18,0x00,0x1E,0x00,0xFF,
	0xFE,0xC0,0xFC,0x03,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0x10,0x00,0x0F,0x00,0xFF,
	0xFE,0x80,0x7E,0x03,0xA7,0xFF,0xFF,0xFF,0xFF,0xFE,0x1B,0x10,0x00,0x0F,0x00,0x7F,
	0xFE,0x80,0x7E,0x03,0xA2,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x10,0x00,0x0F,0x00,0x3F,
	0xFF,0x80,0x7F,0x03,0xD2,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x90,0x00,0x07,0x00,0x3F,
	0xFF,0x00,0x7F,0x01,0xD3,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xAF,0xF0,0x07,0x80,0x0F,
	0xFD,0x00,0x7F,0x00,0x59,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xFC,0x07,0x80,0x0F,
	0xF9,0x00,0x3F,0x00,0x29,0xDF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0x03,0x80,0x07,
	0xFA,0x00,0x3F,0x00,0x05,0x9F,0xFF,0xFF,0xFC,0xFF,0xFF,0xDF,0xFF,0x81,0x80,0x03,
	0xF4,0x00,0x3F,0x80,0x04,0xEF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFE,0x1F,0xE0,0xC0,0x00,
	0xEC,0x00,0x3F,0x80,0x04,0xEF,0xFF,0xFF,0xFB,0x7F,0xFF,0xBF,0x8F,0xE0,0xC0,0x00,
	0x98,0x00,0x1F,0x80,0x02,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xC7,0xF0,0x60,0x00,
	0xF0,0x00,0x1F,0xC0,0x02,0x7F,0xFF,0xFF,0xFF,0xEF,0xFE,0x3F,0xE7,0xF8,0x60,0x00,
	0xE0,0x00,0x0F,0xC0,0x01,0x3F,0xFD,0xE1,0xFD,0xDF,0xFC,0x7F,0xE3,0xF8,0x00,0x00,
	0xE0,0x00,0x0F,0xC0,0x01,0xBB,0xEB,0xFC,0x63,0x5F,0xFC,0x7F,0xE3,0xFC,0x10,0x00,
	0xC0,0x00,0x3F,0xC0,0x02,0x9B,0xE9,0xFF,0xFF,0xDF,0xF0,0xF0,0x03,0xFE,0x00,0x00,
	0xC0,0x00,0x3F,0xC0,0x02,0x9B,0xE9,0xFF,0xFF,0xDF,0xF0,0xF0,0x03,0xFE,0x00,0x00,
	0x80,0x00,0x7D,0xE0,0x02,0x5F,0xD8,0x1F,0xFE,0x3F,0xE0,0xE0,0x07,0xFE,0x00,0x00,
	0x00,0x00,0xFC,0xF0,0x20,0x07,0xF8,0x00,0x06,0x7F,0x81,0xC0,0x07,0xFE,0x00,0x00,
	0x00,0x03,0xFE,0xF0,0x26,0x27,0xD8,0x00,0x0C,0x5F,0x01,0xC0,0x07,0xFE,0x00,0x00,
	0x00,0x07,0xFE,0x70,0x16,0x23,0xDC,0x00,0x0A,0xFE,0x00,0x80,0x0F,0xFF,0x00,0x00,
	0x00,0x3F,0xFF,0x78,0x1A,0x18,0x76,0x00,0x0E,0xFC,0x01,0x80,0x0F,0xFF,0x00,0x00,
	0x00,0xFF,0xFF,0x38,0x16,0x09,0xF9,0x80,0x27,0xF0,0x01,0x1C,0x1F,0xFF,0x00,0x00,
	0x01,0xFF,0xFF,0x38,0x16,0x05,0xFD,0xC0,0x6F,0xE0,0x03,0x3C,0x1F,0xFF,0x00,0x00,
	0x1F,0xFF,0xFF,0x9C,0x17,0x04,0xE7,0x5F,0x9F,0x80,0x03,0x3C,0x7E,0xFF,0x00,0x00,
	0xFF,0xFF,0xBF,0x8C,0x07,0x02,0x7B,0xE9,0x7E,0x03,0xC3,0xF8,0x7E,0x7F,0x00,0x00,
	0xFF,0xFF,0xEF,0xC6,0x07,0x41,0x3E,0x7F,0xFC,0x25,0xCF,0xF1,0xFC,0x6F,0x00,0x00,
	0xFF,0xFF,0xFD,0xC6,0x07,0x62,0xBF,0xBF,0xF8,0x31,0xCF,0xF1,0xFC,0xEF,0x00,0x00,
	0xFF,0xFF,0xFE,0xE7,0x85,0x53,0x5F,0xE3,0xF0,0xC8,0xCF,0xE3,0xFC,0x6F,0x00,0x00,
	0xFF,0xFF,0xFC,0xF3,0x85,0xC3,0xAF,0xFC,0xC0,0xF1,0x1F,0xC7,0xFD,0x6F,0x00,0x00,
	0xFF,0xFF,0xFF,0x79,0xC7,0xC1,0xC7,0xFE,0x00,0xCC,0xBF,0xCF,0xF9,0x27,0x00,0x00,
	0xFF,0xFF,0x03,0xF8,0x43,0xD1,0xE7,0xFE,0x00,0xDC,0x5F,0x8F,0xF9,0x63,0x00,0x00,
};


const uint8_t pixel[lenght] PROGMEM = {
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xFF,0xF3,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xFF,0xFB,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xFF,0xF3,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xFF,0xDB,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xFF,0xF3,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD7,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xFF,0xD3,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xB7,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xFE,0xFB,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xB7,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xFF,0xFB,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xFC,0x43,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xFC,0x03,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBF,0xFF,0xFF,0xFF,0xFF,0xFE,0x80,0x18,0x03,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x03,
	0xFF,0xFF,0x87,0xFF,0xFF,0xFF,0xFF,0x1F,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x03,
	0xFF,0xFE,0x03,0xFF,0xFF,0xFF,0xEF,0xBF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x03,
	0xFF,0xF8,0x07,0xFF,0xFF,0xFF,0xEE,0xBF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x03,
	0xFF,0xF0,0x0F,0xFF,0xFF,0xFF,0xE9,0x7F,0xFF,0xFE,0x80,0x00,0x00,0x00,0x00,0x03,
	0xFF,0xF0,0x01,0xBF,0xFF,0xFF,0xBA,0xE7,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x03,
	0xFF,0xE0,0x00,0x3F,0xFF,0xEC,0x97,0xE3,0xFF,0xD0,0x00,0x00,0x00,0x00,0x00,0x03,
	0xFF,0xE0,0x00,0x3B,0xFF,0x62,0x15,0xE9,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
	0xFF,0xC0,0x00,0x31,0xE2,0x00,0x1D,0xED,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
	0xFF,0xC0,0x00,0x06,0x98,0x00,0x1F,0xEE,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
	0xFF,0xE0,0x00,0x03,0x80,0x01,0x8B,0xDB,0xEC,0x00,0x00,0x1F,0x00,0x00,0x00,0x03,
	0xFF,0xE0,0x00,0x00,0x00,0x03,0x8F,0xFB,0xD0,0x00,0x00,0x3F,0xFE,0x03,0x00,0x03,
	0xFF,0xE0,0x00,0x00,0x00,0x07,0x87,0x7F,0x08,0x00,0x00,0xFF,0xFE,0x00,0x00,0x03,
	0xFF,0xF0,0x00,0x00,0x01,0x97,0x80,0x7C,0x38,0x00,0x01,0xFF,0xFE,0x00,0x04,0x03,
	0xFF,0xF8,0x00,0x00,0x33,0x1F,0xC0,0x7A,0xF0,0x00,0x03,0xFF,0xFC,0x00,0x00,0x33,
	0xFF,0xFC,0x00,0x00,0x73,0x13,0xC0,0x74,0xF0,0x00,0x07,0xFF,0xFC,0x00,0x00,0x33,
	0xFF,0xFF,0x00,0x00,0x42,0x33,0x80,0x30,0x00,0x00,0x0F,0xFF,0xFC,0x00,0x00,0x23,
	0xFF,0xFF,0xE0,0x00,0xC6,0x31,0x00,0xF8,0x00,0x00,0x1F,0xFF,0xFC,0x00,0x00,0x03,
	0xFF,0xFF,0xF8,0x00,0xC6,0x61,0x00,0xF8,0x00,0x00,0x3F,0xFF,0xFC,0x00,0x00,0x03,
	0xFF,0xFF,0xFC,0x01,0x8C,0x66,0x21,0xEC,0x00,0x00,0x7F,0xFF,0xFC,0x00,0x00,0x03,
	0xFF,0xFF,0xFC,0x11,0x98,0xC6,0x01,0xE2,0x08,0x00,0xFF,0xFF,0xFC,0x00,0x00,0x03,
	0xFF,0xFF,0xFC,0x33,0x18,0xC2,0x41,0xC4,0x00,0x01,0xFF,0xFF,0xFE,0x00,0x00,0x03,
	0xFF,0xFF,0xFC,0x23,0x18,0xCA,0x01,0xC0,0x00,0x03,0xFF,0xFF,0xFE,0x02,0x00,0x03,
	0xFF,0xFF,0xFE,0x63,0x10,0x8A,0x01,0x80,0x00,0xC7,0xFF,0xFF,0xFE,0x86,0x00,0x03,
	0xFF,0xFF,0xFE,0x08,0x31,0x0A,0x03,0x00,0x02,0x07,0xFF,0xFF,0xFE,0x83,0x00,0x13,
	0xFF,0xFF,0xFE,0x30,0x10,0x1A,0x06,0x0E,0x00,0x03,0xFF,0xFF,0xFF,0x87,0x84,0x13,
	0xFF,0xFF,0xFE,0x60,0xA0,0x12,0x0C,0x0E,0x00,0x01,0xFF,0xFF,0xFF,0x87,0x06,0x13,
	0xFF,0xFF,0xFE,0x03,0x00,0x00,0x08,0x12,0x00,0x00,0x7F,0xFF,0xFF,0x87,0xDE,0x13,
	0xFF,0xFF,0xFF,0x06,0x00,0x20,0x18,0x00,0x00,0x00,0x7F,0xFF,0xFF,0x8F,0xFE,0x13,
	0xFF,0xFF,0xFF,0x08,0x38,0x00,0x70,0x00,0x00,0x00,0x1F,0xFF,0xFF,0x9F,0xFE,0x13,
	0xFF,0xFF,0xFF,0x00,0x62,0x40,0x20,0x00,0x00,0x00,0x07,0xFF,0xFF,0x8F,0xBE,0x1B,
	0xFF,0xFF,0xFF,0x80,0xC7,0x02,0xC0,0x00,0x00,0x00,0x03,0xFF,0xFF,0x9F,0xFE,0x1B,
	0xFF,0xFF,0xFF,0xC1,0x0F,0x87,0x80,0x00,0x00,0x00,0x00,0x7F,0xFF,0x9F,0xFE,0x1B,
	0xFF,0xFF,0xFF,0xE2,0x1F,0xCC,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0x9F,0xBE,0x1B,
	0xFF,0xFF,0xFF,0xF8,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0x8F,0xDE,0x1B,
	0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0x9F,0x9E,0x1B,
	0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x9F,0xBE,0x03,
	0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x9F,0x7E,0x13,
	0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x40,0x06,0x00,0x00,0x00,0x00,0x07,0x9F,0x9C,0x0B,
	0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x87,0xB2,0x1B,
	0xFF,0xFF,0xFF,0xFF,0xFF,0x01,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x3F,0xC6,0x0B,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xE7,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x07,0x0E,0x0B,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x16,0x0B,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x06,0x03,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x06,0x03,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x04,0x03,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x03,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x03,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x03,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x03,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x03,
};


const uint8_t natsu[lenght] PROGMEM = {
	0x00,0x00,0x03,0xF3,0xE6,0x82,0x08,0x3C,0x02,0x5D,0x74,0x0F,0x39,0x97,0xE7,0xE5,
	0x00,0x00,0x07,0x73,0x67,0xD5,0x58,0x28,0x05,0x77,0x31,0x8F,0x09,0xB3,0xE4,0xFC,
	0x00,0x00,0x0E,0xF3,0x63,0xE9,0x18,0x3C,0x83,0x6E,0x35,0x96,0x3C,0x33,0xD8,0xF0,
	0x00,0x00,0x19,0xF3,0x63,0x88,0x38,0x3E,0x81,0x3E,0xA4,0x06,0x44,0x93,0xD8,0x7E,
	0x00,0x00,0x1B,0xD7,0x61,0xA4,0x08,0x1F,0x01,0x9A,0xB4,0x06,0x44,0x43,0xC9,0x3E,
	0x00,0x00,0x3F,0x8B,0x61,0xAC,0x28,0x0F,0x00,0x9E,0x24,0x06,0x40,0x41,0xC2,0x1C,
	0x00,0x00,0x77,0x18,0xA3,0x80,0x04,0x05,0x00,0xC7,0x30,0x02,0xC0,0x81,0xF3,0x0C,
	0x00,0x00,0xE6,0x0A,0xA3,0x80,0x00,0x06,0x80,0x67,0x12,0x02,0xC3,0x41,0xE1,0x2E,
	0x00,0x00,0xFD,0x18,0xC3,0x90,0x04,0x06,0x80,0x3B,0xC2,0x02,0xC0,0xC1,0xE1,0x9E,
	0x00,0x01,0xFC,0xB9,0xA3,0x00,0x00,0x03,0x40,0x18,0x12,0x00,0xC0,0x50,0x61,0xA4,
	0x00,0x03,0x5C,0x25,0x01,0x08,0x00,0x03,0x40,0x29,0x22,0x00,0xC0,0x20,0xE0,0x84,
	0x00,0x07,0xEC,0x70,0x01,0x00,0x00,0x03,0x00,0x05,0xA2,0x03,0xC0,0x20,0xE0,0xC0,
	0x00,0x0F,0xF0,0xD1,0x03,0x00,0x00,0x01,0xA0,0x14,0x52,0x83,0x80,0x90,0xE0,0x00,
	0x00,0x1F,0xC0,0xC1,0x43,0x00,0x00,0x01,0x80,0x1B,0xA1,0x00,0xC0,0x48,0xE0,0x60,
	0x00,0x3E,0x00,0xC1,0xC3,0x00,0x00,0x00,0xC0,0x0F,0x00,0x00,0x40,0x08,0xE0,0x20,
	0x00,0x00,0x01,0x80,0x83,0x80,0x00,0x00,0xD0,0x0B,0x90,0x00,0xC0,0x00,0xA0,0x20,
	0x00,0x10,0x03,0x80,0xE2,0x80,0x00,0x00,0x60,0x05,0x10,0x00,0x40,0x44,0xA0,0x40,
	0x00,0x00,0x06,0x03,0xA2,0x80,0x00,0x00,0x60,0x05,0x10,0x00,0x40,0x04,0xA0,0x40,
	0x00,0x00,0x08,0x03,0xA3,0x00,0x08,0x00,0x60,0x03,0xA8,0x00,0x40,0x04,0x20,0x40,
	0x00,0x00,0x39,0x03,0x71,0x00,0x01,0x00,0x34,0x00,0x8A,0x00,0x00,0x04,0x80,0x00,
	0x00,0x00,0x30,0x06,0x53,0x00,0x00,0x40,0x34,0x00,0x12,0x00,0x00,0x04,0x40,0x00,
	0x00,0x00,0x60,0x04,0x18,0x81,0x80,0x28,0x14,0x00,0x50,0x00,0x00,0x04,0x40,0x00,
	0x00,0x00,0xC0,0x0C,0x09,0x83,0xF1,0x0C,0x28,0x00,0x80,0x00,0x1E,0x05,0x00,0x00,
	0x00,0x01,0x80,0x18,0x18,0x8B,0xF0,0x01,0x2A,0x00,0x00,0x00,0x9F,0x03,0x00,0x00,
	0x00,0x00,0x00,0x18,0x18,0x87,0xF0,0x70,0xF6,0x00,0x40,0x00,0x1F,0x0A,0x00,0x00,
	0x00,0x00,0x00,0x30,0x18,0x07,0xF0,0xFC,0x36,0x00,0x40,0x0C,0x3F,0x86,0x04,0x00,
	0x00,0x00,0x00,0x20,0x18,0x03,0xF9,0xFE,0x0E,0x00,0x00,0x3F,0x7F,0x88,0x00,0x00,
	0x00,0x00,0x00,0x60,0x1C,0x03,0xFF,0xFF,0x01,0x01,0x00,0xFF,0xFF,0xC0,0x00,0x00,
	0x00,0x00,0x00,0x80,0x10,0x01,0xFF,0xFF,0x81,0x00,0xA0,0xFF,0xFF,0xC0,0x00,0x00,
	0x00,0x00,0x01,0x00,0x14,0x03,0xFF,0xFF,0xC0,0x00,0x81,0xFF,0xFF,0xC0,0x00,0x00,
	0x00,0x00,0x00,0x00,0x11,0x02,0xFF,0xFF,0xC0,0x00,0x81,0xFF,0xFF,0x84,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0x00,0x80,0x12,0xFF,0xFF,0x44,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x23,0xEF,0xFC,0x00,0x00,0x00,0x3F,0xFE,0xC8,0x00,0x00,
	0x00,0x00,0x00,0x00,0x04,0x2B,0xFF,0xF0,0x00,0x80,0x00,0x0D,0xFB,0xE8,0x00,0x00,
	0x00,0x00,0x00,0x00,0x20,0x1B,0xFE,0xD8,0x00,0xC2,0x00,0x81,0xFF,0xE8,0x00,0x00,
	0x00,0x00,0x00,0x00,0x10,0x3B,0xFF,0xFC,0x81,0xE3,0x20,0x00,0x5F,0xA0,0x00,0x00,
	0x00,0x00,0x00,0x00,0x04,0x1F,0xFF,0xFC,0x03,0xE3,0xB8,0x33,0xFF,0xE0,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xE7,0xFF,0xFD,0xFF,0xF0,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xF7,0xFE,0xFF,0xFF,0xE0,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xE0,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x4F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x27,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,
	0x00,0x00,0x00,0x00,0x01,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC8,0x00,0x00,
	0x00,0x00,0x00,0x00,0x01,0xFB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x9C,0x00,0x00,
	0x00,0x00,0x00,0x00,0x03,0xF3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x9F,0x00,0x00,
	0x00,0x00,0x00,0x00,0x0F,0x79,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0x80,0x00,
	0x00,0x00,0x00,0x00,0x0F,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0xD8,0x00,
	0x00,0x00,0x00,0x00,0x1F,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xF0,0x00,
	0x00,0x00,0x00,0x00,0x1F,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3B,0xF0,0x00,
	0x00,0x00,0x00,0x00,0x1F,0xDE,0x7F,0xFF,0xFF,0xBB,0xFF,0xFF,0xFF,0x5B,0xF0,0x00,
	0x00,0x00,0x00,0x00,0x1D,0xD6,0x7F,0xFF,0xFF,0xC7,0xDF,0xFF,0xF9,0x0B,0xF8,0x00,
	0x00,0x00,0x00,0x00,0x1D,0xF7,0x3F,0xF7,0xFF,0xF3,0xFF,0xBF,0xF9,0x07,0xF8,0x00,
	0x00,0x00,0x00,0x00,0x3F,0xFF,0x9F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x07,0xF8,0x00,
	0x00,0x00,0x00,0x00,0x7F,0xFE,0x5F,0xFB,0xC1,0xFF,0xFB,0x9F,0xEB,0x0F,0xFC,0x00,
	0x00,0x00,0x00,0x03,0xF7,0xFF,0x0F,0xE8,0x00,0x00,0x00,0x1F,0xC0,0x1F,0xFE,0x00,
	0x00,0x00,0x00,0x02,0xFF,0xFF,0x87,0xE8,0x00,0x00,0x00,0x97,0x80,0x7F,0xFE,0x00,
	0x00,0x00,0x00,0x02,0xFF,0xFB,0xC1,0xF8,0x00,0x00,0x02,0x9F,0x80,0xFF,0xFF,0x00,
	0x00,0x00,0x00,0x01,0xFF,0xFF,0xE0,0xF8,0x70,0x00,0x06,0x9F,0x03,0xFF,0xFF,0x00,
	0x00,0x00,0x00,0x05,0xFF,0xFF,0xF0,0x3D,0x7C,0x00,0x1E,0xDC,0x07,0xFF,0xDF,0xC0,
	0x00,0x00,0x00,0x09,0xFF,0xFF,0xF8,0x1F,0xBF,0xFF,0xFD,0xF8,0x1F,0xFF,0xFF,0x60,
	0x00,0x00,0x00,0x37,0xFF,0xFF,0xFE,0x07,0xFF,0xFF,0xFB,0xA0,0x3F,0xFF,0x9F,0x40,
	0x00,0x00,0x00,0x3B,0xFF,0xFB,0xFF,0x03,0xFF,0xFF,0xDF,0xC0,0x7F,0xFF,0xBF,0xE0,
	0x00,0x00,0x00,0x91,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
	0x00,0x00,0x00,0x4F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF4,
};

const uint8_t jam[] PROGMEM = {
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,
	0x78,0x20,0x00,0x00,0x10,0x10,0x00,0x1F,0x44,0x00,0x00,0x00,0x10,0x10,0x00,0x1F,
	0x42,0xF9,0xCE,0xC0,0xD3,0x96,0x54,0x5F,0x42,0x12,0x29,0x21,0x34,0x59,0x64,0x5F,
	0x42,0x23,0xE9,0x21,0x14,0x51,0x42,0x9F,0x42,0x42,0x09,0x21,0x14,0x51,0x42,0x9F,
	0x44,0x82,0x29,0x21,0x34,0x59,0x42,0x9F,0x78,0xF9,0xC9,0x20,0xD3,0x96,0x41,0x1F,
	0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x1F,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,
};