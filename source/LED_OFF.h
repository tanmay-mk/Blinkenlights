/*******************************************************************************
 * PES Assingment 3
 * File Name: LED_OFF.h
 * Author: Tanmay Mahendra Kothale - tanmay.kothale@colorado.edu (tanmay-mk)
 *********************************************************************************/
#ifndef __TURNING_OFF_LED__
#define __TURNING_OFF_LED__

/**********************************************************
 * 			OTHER FILES TO BE INCLUDED
 **********************************************************/
#include "LED_INIT.h"

/*****************************************************
 * @brief:Turns OFF Red LED
 * @parameters: none
 * Returns: none
 *****************************************************/
void RED_LED_OFF();
/*****************************************************
 * @brief:Turns OFF Blue LED
 * @parameters: none
 * Returns: none
 *****************************************************/
void BLUE_LED_OFF();
/*****************************************************
 * @brief:Turns OFF Green LED
 * @parameters: none
 * Returns: none
 *****************************************************/
void GREEN_LED_OFF();
/*****************************************************
 * @brief:Turns OFF All LEDs
 * @parameters: none
 * Returns: none
 *****************************************************/
void WHITE_LED_OFF();
/*****************************************************
 * @brief: Turns OFF LED of a specific color
 * @parameters: LED_COLOR
 * Returns: none
 *****************************************************/
void LED_OFF(int LED_COLOR);

#endif /*__TURNING_OFF_LED__*/
