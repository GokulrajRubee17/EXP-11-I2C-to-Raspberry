
#ifndef BME1301_H
#define BME1301_H

#include "pico/stdlib.h"
#include "hardware/i2c.h"

#define BME1301_ADDR 0x76  // 0x77 if SDO is high

typedef struct {
    float temp;
    float press;
    float hum;
} bme1301data;

void bme1301_init(i2c_inst_t *i2c);
bme1301data bme1301_read(i2c_inst_t *i2c);

#endif
