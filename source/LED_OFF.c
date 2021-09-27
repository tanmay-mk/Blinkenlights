/*******************************************************************************
 * PES Assingment 3
 * File Name: LED_OFF.c
 * Author: Tanmay Mahendra Kothale - tanmay.kothale@colorado.edu (tanmay-mk)
 *********************************************************************************/


/**********************************************************
 * 			OTHER FILES TO BE INCLUDED
 **********************************************************/

#include "LED_OFF.h"
#include "LED_INIT.h"


void RED_LED_OFF()
{
	RED_LED_INIT();							//initializing red led
	GPIOB->PSOR |= (1 << RED_LED_PIN);		//setting led bit to 1
}

void BLUE_LED_OFF()
{
	BLUE_LED_INIT();						//initializing blue led
	GPIOD->PSOR |= (1 << BLUE_LED_PIN);		//setting led bit to 1
}

void GREEN_LED_OFF()
{
	GREEN_LED_INIT();						//initializing green led
	GPIOB->PSOR |= (1 << GREEN_LED_PIN);	//setting led bit to 1
}

void WHITE_LED_OFF()
{
	RED_LED_OFF();			//setting all LED bits to 1
	BLUE_LED_OFF();
	GREEN_LED_OFF();
}

void LED_OFF(int LED_COLOR)
{
	switch (LED_COLOR)
	{
	case WHITE:
		WHITE_LED_OFF();
		break;

	case RED:
		RED_LED_OFF();
		break;

	case BLUE:
		BLUE_LED_OFF();
		break;

	case GREEN:
		GREEN_LED_OFF();
		break;

	default:
		break;
	}
}
