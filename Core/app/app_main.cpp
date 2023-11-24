/*
 * app_main.c
 *
 *  Created on: Oct 24, 2023
 *      Author: onlydcx
 */

#include "./app_main.h"

#include <stdint.h>
#include <stdio.h>
#include <math.h>

#include <Drives/line.h>

//   HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15|GPIO_PIN_10
//                           |GPIO_PIN_11|GPIO_PIN_12, GPIO_PIN_SET);
//  uint16_t mux_pin[2][4] = {
//		  {PC12,PC13,PC14,PC15},
//		  {PA11,PA10,PC10,PC11}
//  };
  char buf[1];

void app_init() {
    // devices = new Devices();
    // devices->init();
    // HardwareController* hwc = new HardwareController(devices);
    // hwc->init();
}
void app_main() {
    app_init();
    while (1) {
    }
}