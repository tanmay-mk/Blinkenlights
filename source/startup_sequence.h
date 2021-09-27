/*******************************************************************************
 * PES Assingment 3
 * File Name: startup_sequence.h
 * Author: Tanmay Mahendra Kothale - tanmay.kothale@colorado.edu (tanmay-mk)
 *********************************************************************************/

#ifndef __MY_STARTUP_SEQUENCE__
#define __MY_STARTUP_SEQUENCE__

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

/*****************************************************
 * @brief:Performs the startup sequence when MCU powers on by:
 * Turning ON Red LED for 500mSec.
 * Turning ON Green LED for 500mSec.
 * Turning ON Blue LED for 500mSec.
 * Turning ON White LED for 100mSec twice.
 *
 * @parameters: none
 * Returns: none
 *****************************************************/
void STARTUP_SEQUENCE();

#endif /*__MY_STARTUP_SEQUENCE__*/
