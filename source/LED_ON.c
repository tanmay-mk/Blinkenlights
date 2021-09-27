/*******************************************************************************
 * PES Assingment 3
 * File Name: LED_ON.c
 * Author: Tanmay Mahendra Kothale - tanmay.kothale@colorado.edu (tanmay-mk)
 *********************************************************************************/


/**********************************************************
 * 			OTHER FILES TO BE INCLUDED
 **********************************************************/
#include "LED_ON.h"

void RED_LED_ON()
{
	RED_LED_INIT();							//initializes Red LED
    GPIOB->PCOR |= (1 << RED_LED_PIN);		//clearing LED bit
}

void BLUE_LED_ON()
{
	BLUE_LED_INIT();						//initializes Red LED
    GPIOD->PCOR |= (1 << BLUE_LED_PIN);		//clearing LED bit
}

void GREEN_LED_ON()
{
	GREEN_LED_INIT();							//initializes Red LED
    GPIOB->PCOR |= (1 << GREEN_LED_PIN);		//clearing LED bit
}

void WHITE_LED_ON()
{
	RED_LED_ON();
	BLUE_LED_ON();
	GREEN_LED_ON();
}

void LED_ON(int LED_COLOR)
{
	switch(LED_COLOR)
	{
	case WHITE:
		WHITE_LED_ON();
		break;

	case RED:
		RED_LED_ON();
		break;

	case BLUE:
		BLUE_LED_ON();
		break;

	case GREEN:
		GREEN_LED_ON();
		break;

	default:
		break;
	}
}
