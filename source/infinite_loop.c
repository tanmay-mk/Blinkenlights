/*******************************************************************************
 * PES Assingment 3
 * File Name: infinite_loop.c
 * Author: Tanmay Mahendra Kothale - tanmay.kothale@colorado.edu (tanmay-mk)
 *********************************************************************************/


/**********************************************************
 * 			OTHER FILES TO BE INCLUDED
 **********************************************************/

#include "infinite_loop.h"
#include "scheduler.h"
#include "LOG.h"
#include "LED_OFF.h"



void INFINITE_LOOP()
{
	/******************************************
	 * @brief:
	 * onTimeValue: The value of delay is for LED ON
	 *			is dynamic. So this variable stores the
	 * 			desired value of the delay.
	 *
	 *	multiplier: it is an array of multipliers which help
	 *		the calculation of onTimeValue
	 *
	 **********************************************/
	while(1)											//the main loop which goes on forever
	{
		uint32_t i=0, onTimeValue=0;
		uint32_t multiplier[4] = {0, 1, 3, 5};			//array of multipliers
		static uint32_t color = 0;
		for(i=0; i<4; i++)
		{
			color = getNextColor();
			onTimeValue = ((multiplier[i]*500)+500);
			/******************************************
			 * @brief:
			 * 0*500 + 500 = 500
			 *
			 * 1*500+500 = 1000
			 *
			 * 3*500+500 = 1500
			 *
			 * 5*500+500 = 3000
			 **********************************************/
			STATE_MACHINE(color);			//entering the state machine with the color
			delay(onTimeValue);	//keeping the desired LED on for given time period
			LED_OFF(WHITE);					//turning off the LED
			delay(500);			//waiting for 0.5 seconds
		} //for
	}	//while
}//INFINITE_LOOP

void STATE_MACHINE (uint32_t LED_COLOR)
{
	state_t			currentState;
	static state_t nextState = 0;

	currentState = nextState;

	switch(currentState)
	{
	case STATE0_WHITE:

		if (LED_COLOR == WHITE)
		{
			LED_OFF(WHITE);					//turning off all LEDs
			nextState = STATE0_WHITE;
			LED_ON(WHITE);					//turning on desired LED
			break;
		}
		if (LED_COLOR == RED)
		{
			LED_OFF(WHITE);					//turning off all LEDs
			nextState = STATE1_RED;
			LED_ON(RED);					//turning on desired LED
			break;
		}
		if (LED_COLOR == GREEN)
		{
			LED_OFF(WHITE);					//turning off all LEDs
			nextState = STATE2_GREEN;
			LED_ON(GREEN);					//turning on desired LED
			break;
		}

		if (LED_COLOR == BLUE)
		{
			LED_OFF(WHITE);					//turning off all LEDs
			nextState = STATE3_BLUE;
			LED_ON(BLUE);					//turning on desired LED
			break;
		}
		break;

	case STATE1_RED:
		nextState = STATE1_RED;
		LED_ON(RED);
		if (LED_COLOR == GREEN)
		{
			LED_OFF(WHITE);					//turning off all LEDs
			nextState = STATE2_GREEN;
			LED_ON(GREEN);					//turning on desired LED
			break;
		}

		if (LED_COLOR == BLUE)
		{
			LED_OFF(WHITE);					//turning off all LEDs
			nextState = STATE3_BLUE;
			LED_ON(BLUE);					//turning on desired LED
			break;
		}
		break;

	case STATE2_GREEN:
		nextState = STATE2_GREEN;
		LED_ON(GREEN);
		if (LED_COLOR == RED)
		{
			LED_OFF(WHITE);					//turning off all LEDs
			nextState = STATE1_RED;
			LED_ON(RED);					//turning on desired LED
			break;
		}

		if (LED_COLOR == BLUE)
		{
			LED_OFF(WHITE);					//turning off all LEDs
			nextState = STATE3_BLUE;
			LED_ON(BLUE);					//turning on desired LED
			break;
		}
		break;

	case STATE3_BLUE:
		nextState = STATE3_BLUE;
		LED_ON(BLUE);
		if (LED_COLOR == RED)
		{
			LED_OFF(WHITE);					//turning off all LEDs
			nextState = STATE1_RED;
			LED_ON(RED);					//turning on desired LED
			break;
		}

		if (LED_COLOR == GREEN)
		{
			LED_OFF(WHITE);					//turning off all LEDs
			nextState = STATE2_GREEN;
			LED_ON(GREEN);					//turning on desired LED
			break;
		}
		break;
	}
}
