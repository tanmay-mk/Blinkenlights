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
	LOG("Start Timer: %d mSec\n\n", iterations);
	int j;									//a variable for iterations
	int polling;
	polling = iterations/100;				//total number of polls occurring in the given time period
	while (polling--)
	{
		for(int k = 0; k<100; k++)
		{
			j = 9800;					//1 millisecond is approximately 9800 integer counts
			while (j--)					//iterations = polling * 100 * 1 msec (integer value 9800)
			{__asm volatile ("NOP");}
		} //for

		touch_value = Touch_Scan_LH();		//polling the touch value for change in color
		LOG("%d\n", touch_value);

		if (touch_value > 200 && touch_value < 450)
		{
			LOG("Touch Slider Value: %d\nChanging LED Color to RED.\n\n", touch_value);
			STATE_MACHINE(RED);			//changing color to red
		}
		else if (touch_value > 450 && touch_value <750 )
		{
			LOG("Touch Slider Value: %d\nChanging LED Color to GREEN\n\n", touch_value);
			STATE_MACHINE(GREEN);			//changing color to green
		}
		else if (touch_value > 750)
		{
			LOG("Touch Slider Value: %d\nChanging LED Color to BLUE.\n\n", touch_value);
			STATE_MACHINE(BLUE);			//changing color to green
		}
	} 		//while
} 			//delay_infinite
