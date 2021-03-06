/*******************************************************************************
 * PES Assingment 3
 * File Name: LED_ON.h
 * Author: Tanmay Mahendra Kothale - tanmay.kothale@colorado.edu (tanmay-mk)
 *********************************************************************************/

#include "startup_sequence.h"
#include "LOG.h"

void STARTUP_SEQUENCE()
{
	//turning on and off Red LED
	RED_LED_ON();
	delay(500);
	RED_LED_OFF();
	delay(100);

	//turning on and off Green LED
	GREEN_LED_ON();
	delay(500);
	GREEN_LED_OFF();
	delay(100);

	//turning on and off Blue LED
	BLUE_LED_ON();
	delay(500);
	BLUE_LED_OFF();
	delay(100);

	for (int i=0; i<2; i++)
	{
		//turning ON and OFF white LED twice
		WHITE_LED_ON();
		delay(100);
		WHITE_LED_OFF();
		delay(100);
	}

}
