/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/
#include "PeripheralPins.h"

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/
extern const PinName digitalPin[];

#define PA10 0
#define PA9  1
#define PA12 2
#define PB0  3
#define PB7  4
#define PB6  5
#define PB1  6
#define PF0  7
#define PF1  8
#define PA8  9
#define PA11 10
#define PB5  11
#define PB4  12
#define PB3  13 // LED
#define PA0  14 // A0
#define PA1  15 // A1
#define PA3  16 // A2
#define PA4  17 // A3
#define PA5  18 // A4 - if SB18 ON (default) connected to PB7
#define PA6  19 // A5 - if SB16 ON (default) connected to PB6
#define PA7  20 // A6
#define PA2  21 // A7 - STLink Tx
#define PA15 22 // STLink Rx

// This must be a literal
#define NUM_DIGITAL_PINS        23
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       7
#define NUM_ANALOG_FIRST        14

// On-board LED pin number
#define LED_BUILTIN             13
#define LED_GREEN               LED_BUILTIN

// On-board user button
//#define USER_BTN              NC

// I2C Definitions
#define PIN_WIRE_SDA            4
#define PIN_WIRE_SCL            5

// Timer Definitions
// Do not use timer used by PWM pins when possible. See PinMap_PWM.
#define TIMER_TONE              TIM6

// Do not use basic timer: OC is required
#define TIMER_SERVO             TIM2  //TODO: advanced-control timers don't work

 // UART Definitions
#define SERIAL_UART_INSTANCE    2 //Connected to ST-Link

// Serial Pin Firmata
#define PIN_SERIAL_RX           PA15 // 22
#define PIN_SERIAL_TX           PA2  // 21

#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR   Serial
#define SERIAL_PORT_HARDWARE  Serial
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
