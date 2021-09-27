/*******************************************************************************
 * PES Assingment 3
 * File Name: scheduler.
 * Author: Tanmay Mahendra Kothale - tanmay.kothale@colorado.edu (tanmay-mk)
 *********************************************************************************/
/**********************************************************
 * 				OTHER FILES TO BE INCLUDED
 **********************************************************/
#include "scheduler.h"
/**********************************************************
 * 					GLOBAL VARIABLES
 **********************************************************/
uint32_t colorFlag = 0;

void schedulerSetColor(uint32_t LED_COLOR)
{
	switch(LED_COLOR)
	{
	case RED:
		colorFlag |= RED;				//setting RED Color event using READ-MODIFY-WRITE
		break;

	case GREEN:
		colorFlag |= GREEN;				//setting Green Color event using READ-MODIFY-WRITE
		break;

	case BLUE:
		colorFlag |= BLUE;				//setting Blue Color event using READ-MODIFY-WRITE
		break;

	default:
		break;
	} //SWITCH

} //schedulerSetColor


uint32_t getNextColor()
{
	uint32_t color = WHITE;			//initializing default case as White

	if (colorFlag & RED)
	{
		color = RED;
		colorFlag = colorFlag & (RED ^ 0xFFFFFFFF);	//clearing color flag
	}

	if (colorFlag & BLUE)
	{
		color = BLUE;
		colorFlag = colorFlag & (BLUE ^ 0xFFFFFFFF);	//clearing color flag
	}

	if (colorFlag & GREEN)
	{
		color = GREEN;
		colorFlag = colorFlag & (GREEN ^ 0xFFFFFFFF);	//clearing color flag
	}

	return color;
} //getNextColor
