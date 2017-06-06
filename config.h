//
// Created by SQ5RWU on 2016-12-24.
//

#ifndef STM32_RTTY_CONFIG_H
#define STM32_RTTY_CONFIG_H

#ifdef USE_EXTERNAL_CONFIG
#include "config_external.h"
#else

//**************config**************
#define CALLSIGN "DF8OE" // put your callsign here
#define APRS_CALLSIGN "DF8OE-10"
#define RTTY_GREETING "$$$$$$RS41 modified for amateur radio use by DF8OE, enjoy and see you on the HUB... \n\r"
#define APRS_SSID 'B'
#define APRS_COMMENT " Hello from the sky!"
#define RTTY_TO_APRS_RATIO 5

//*************frequency********************
#define RTTY_FREQUENCY  434.500f //Mhz middle frequency
#define APRS_FREQUENCY  432.500f //Mhz middle frequency
//************rtty speed****************** si4032
#define RTTY_SPEED  300
// SHITY -> 450Hz
//************rtty bits****************** si4032
#define RTTY_7BIT   1
//************rtty stop bits****************** si4032
#define RTTY_USE_2_STOP_BITS   0
//********* power definition**************************
#define Smoc  7 // PWR 0...7 0- MIN ... 7 - MAX
// 7 -> 42.95 mW@434.150 MHz na E4406A
//***************************************************
// WARNING: do not use this in flying tracker!
#define ALLOW_DISABLE_BY_BUTTON 1
//********** frame delay in msec**********
#define tx_delay  5000
#endif

#endif //STM32_RTTY_CONFIG_H
