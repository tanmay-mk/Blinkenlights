/*******************************************************************************
 * PES Assingment 3
 * File Name: LED_INIT.h
 * Author: Tanmay Mahendra Kothale - tanmay.kothale@colorado.edu (tanmay-mk)
 *********************************************************************************/
#ifndef __LED_INITIALIZE__
#define __LED_INITIALIZE__

#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL25Z4.h"
#include "fsl_debug_console.h"

/*****************************************************
 * 					MACROS
 *****************************************************/
#define RED_LED_PIN 18
#define BLUE_LED_PIN 1
#define GREEN_LED_PIN 19

/*****************************************************
 * @brief:an enumeration of colors as integer values
 *****************************************************/
enum {
	WHITE		= 0,
	RED			= 1,
	GREEN		= 2,
	BLUE		= 4
};


/*****************************************************
 * @brief:Initializes Red LED
 * @parameters: none
 * Returns: none
 *****************************************************/
void RED_LED_INIT();
/*****************************************************
 * @brief:Initializes Blue LED
 * @parameters: none
 * Returns: none
 *****************************************************/
void BLUE_LED_INIT();
/*****************************************************
 * @brief:Initializes Green LED
 * @parameters: none
 * Returns: none
 *****************************************************/
void GREEN_LED_INIT();

#endif /*__LED_INITIALIZE__*/
