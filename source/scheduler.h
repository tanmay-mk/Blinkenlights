/*******************************************************************************
 * PES Assingment 3
 * File Name: scheduler.
 * Author: Tanmay Mahendra Kothale - tanmay.kothale@colorado.edu (tanmay-mk)
 *********************************************************************************/
#ifndef __MY_SCHEDULER__
#define __MY_SCHEDULER__
/**********************************************************
 * 			OTHER FILES TO BE INCLUDED
 **********************************************************/
#include "infinite_loop.h"
#include "LED_INIT.h"

/*****************************************************
 * @brief:Sets an event in the scheduler to determine which
 * 		color of LED should glow next
 * @parameters: LED_COLOR
 * Returns: none
 *****************************************************/
void schedulerSetColor(uint32_t LED_COLOR);

/*****************************************************
 * @brief: A function which passes the scheduled event
 * 		to the state machine.
 * @parameters: none
 * Returns: color, which needs to be turned ON
 *****************************************************/
uint32_t getNextColor();

#endif
