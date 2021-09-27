/*******************************************************************************
 * PES Assingment 3
 * File Name: LED_ON.h
 * Author: Tanmay Mahendra Kothale - tanmay.kothale@colorado.edu (tanmay-mk)
 *********************************************************************************/
#ifndef __TURNING_ON_LED__
#define __TURNING_ON_LED__

/**********************************************************
 * 			OTHER FILES TO BE INCLUDED
 **********************************************************/

#include "LED_INIT.h"

/*****************************************************
 * @brief:Turns ON Red LED
 * @parameters: none
 * Returns: none
 *****************************************************/
void RED_LED_ON();

/*****************************************************
 * @brief:Turns ON Blue LED
 * @parameters: none
 * Returns: none
 *****************************************************/
void BLUE_LED_ON();

/*****************************************************
 * @brief:Turns ON Green LED
 * @parameters: none
 * Returns: none
 *****************************************************/
void GREEN_LED_ON();

/*****************************************************
 * @brief:Turns ON All LEDs
 * @parameters: none
 * Returns: none
 *****************************************************/
void WHITE_LED_ON();

/*****************************************************
 * @brief:Turns ON a LED of specific color
 * @parameters: LED_COLOR
 * Returns: none
 *****************************************************/
void LED_ON(int LED_COLOR);

#endif /* __TURNING_ON_LED__*/
