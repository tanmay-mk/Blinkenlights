/*******************************************************************************
 * PES Assingment 3
 * File Name: delay.c
 * Author: Tanmay Mahendra Kothale - tanmay.kothale@colorado.edu (tanmay-mk)
 *********************************************************************************/


/**********************************************************
 * 			OTHER FILES TO BE INCLUDED
 **********************************************************/
#include "delay.h"
#include "TOUCH_INIT.h"
#include "LED_INIT.h"
#include "scheduler.h"
#include "LOG.h"

volatile uint32_t touch_value=0; 		//variable for reading touch value

void delay(int iterations)
{
	/******************************************************************
	 * @brief: int polling: a variable that keeps the count of total
	 * pollings in one delay cycle
	 *******************************************************************/
    Touch_Init();							//initializing touch sensor
	LOG("Start Timer: %d mSec\n\n", iterations);
	int j;									//a variable for iterations
	int polling;
	polling = iterations/100;				//total number of polls occurring in the given time period
	while (polling--)
	{
		for(int k = 0; k<100; k++)
		{
			j = 8657;					//1 millisecond is approximately 8657 integer counts
			while (j--)					//iterations = polling * 100 * 1 msec (integer value 8657)
			{__asm volatile ("NOP");}
		} //for

		touch_value = Touch_Scan_LH();		//polling the touch value for change in color

		if (touch_value > 1000 && touch_value < 2000)
		{
			LOG("Touch Slider Value: %d\nChanging LED Color to RED.\n\n", touch_value);
			STATE_MACHINE(RED);			//changing color to red
		}
		else if (touch_value > 2000 && touch_value <3500 )
		{
			LOG("Touch Slider Value: %d\nChanging LED Color to GREEN\n\n", touch_value);
			STATE_MACHINE(GREEN);			//changing color to green
		}
		else if (touch_value > 3500)
		{
			LOG("Touch Slider Value: %d\nChanging LED Color to BLUE.\n\n", touch_value);
			STATE_MACHINE(BLUE);			//changing color to green
		}
	} //while
} //delay_infinite
