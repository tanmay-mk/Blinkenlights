/*******************************************************************************
 * PES Assingment 3
 * File Name: delay.h
 * Author: Tanmay Mahendra Kothale - tanmay.kothale@colorado.edu (tanmay-mk)
 *********************************************************************************/


#ifndef __MY_DELAY_FUNCTION__
#define __MY_DELAY_FUNCTION__

#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL25Z4.h"
#include "fsl_debug_console.h"

/***************************************************************************
 * @brief: this function is used to provide delay of
 * 			'iterations' milliseconds, in the infinite loop
 *
 * @parameters: iterations - number of millisecond delay required
 *
 * @returns: None
 ***************************************************************************
 */
void delay_infinite(int iterations);

/***************************************************************************
 * @brief: this function is used to provide delay of
 * 			'iterations' milliseconds, in the starting sequence loop
 *
 * @parameters: iterations - number of millisecond delay required
 *
 * @returns: None
 ***************************************************************************
 */

void delay_startup(int iterations);

#endif /*__MY_DELAY_FUNCTION__*/
