/*******************************************************************************
 * PES Assingment 3
 * File Name: infinite_loop.h
 * Author: Tanmay Mahendra Kothale - tanmay.kothale@colorado.edu (tanmay-mk)
 *********************************************************************************/

#ifndef __MY_INFINITE_LOOP__
#define __MY_INFINITE_LOOP__

#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL25Z4.h"
#include "fsl_debug_console.h"

/**********************************************************
 * 			OTHER FILES TO BE INCLUDED
 **********************************************************/
#include "LED_INIT.h"
#include "LED_ON.h"
#include "LED_OFF.h"
#include "delay.h"
#include "TOUCH_INIT.h"

/******************************************
 *
 * @brief: An enumeration of all the desirable states
 * 			the LED can be at any given time
 *
 *********************************************/
typedef enum {
	STATE0_WHITE,
	STATE1_RED,
	STATE2_GREEN,
	STATE3_BLUE,
}state_t;

/******************************************
 *
 * @brief: A state machine which determines the
 * 		next color of LED after a touch event has
 * 		occurred.
 *
 * @parameters:LED_COLOR -> an integer which represents
 * 		a particular color.
 * 		0 - White
 * 		1 - Red
 * 		2 - Green
 * 		4 - Blue
 *
 * @returns: none
 *********************************************/

void STATE_MACHINE(uint32_t LED_COLOR);

/******************************************
 *
 * @brief:The loop which runs forever.
 *
 * @parameters:none
 *
 * @returns: none
 *********************************************/

void INFINITE_LOOP();

#endif /* __MY_INFINITE_LOOP__ */
