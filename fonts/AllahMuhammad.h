#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef FONT_ALLAHMUHAMMAD_H
#define FONT_ALLAHMUHAMMAD_H

static const uint8_t AllahMuhammad[] PROGMEM = {
    0x04, 0x08, // size
    0x20, // width
    0x10, // height
    0x20, // first char
    0x03, // char count
    
    // char widths
    0x00, 0x20, 0x20, 
    
    // font data
    0x00, 0x00, 0x00, 0x00, 0x10, 0x8A, 0x45, 0x23, 0x20, 0xC0, 0x00, 0x00, 0x00, 0x0C, 0x10, 0xCB, 0x10, 0x0C, 0x00, 0x00, 0x00, 0xE0, 0x44, 0x84, 0x02, 0x02, 0xF9, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x02, 0x01, 0x00, 0x1C, 0x22, 0x41, 0x80, 0x80, 0x80, 0x80, 0x40, 0x3F, 0x60, 0x40, 0xC0, 0x80, 0xC0, 0x41, 0x3E, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, // 1
    0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x48, 0x40, 0x00, 0x00, 0x00, 0x00, 0x1C, 0xFC, 0x80, 0x00, 0x04, 0x14, 0x22, 0x12, 0xA2, 0x99, 0x80, 0x40, 0x20, 0x7C, 0x12, 0x0A, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x66, 0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x20, 0x30, 0x18, 0x0F, 0x38, 0x21, 0x41, 0x91, 0xB3, 0xD2, 0x92, 0x0A, 0x0A, 0x0A, 0x0A, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00 // 2
};

#endif
