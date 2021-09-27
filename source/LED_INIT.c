/*******************************************************************************
 * PES Assingment 3
 * File Name: LED_INIT.c
 * Author: Tanmay Mahendra Kothale - tanmay.kothale@colorado.edu (tanmay-mk)
 *********************************************************************************/


/**********************************************************
 * 			OTHER FILES TO BE INCLUDED
 **********************************************************/
#include "LED_INIT.h"

void RED_LED_INIT()
{
    SIM->SCGC5 |= SIM_SCGC5_PORTB_MASK;					//Initializing clock
    PORTB->PCR[RED_LED_PIN] &= ~PORT_PCR_MUX_MASK;		//clearing port b pin 18
    PORTB->PCR[RED_LED_PIN] |= PORT_PCR_MUX(1);			//choosing port b pin 18 as gpio
    GPIOB->PDDR |= (1 << RED_LED_PIN);					//setting pin direction as output
}


void GREEN_LED_INIT()
{
    SIM->SCGC5 |= SIM_SCGC5_PORTB_MASK;					//Initializing clock
    PORTB->PCR[GREEN_LED_PIN] &= ~PORT_PCR_MUX_MASK;	//clearing port b pin 19
    PORTB->PCR[GREEN_LED_PIN] |= PORT_PCR_MUX(1);		//choosing port b pin 19 as gpio
    GPIOB->PDDR |= (1 << GREEN_LED_PIN);				//setting pin direction as output
}


void BLUE_LED_INIT()
{
    SIM->SCGC5 |= SIM_SCGC5_PORTD_MASK;					//Initializing clock
    PORTD->PCR[BLUE_LED_PIN] &= ~PORT_PCR_MUX_MASK;		//clearing port d pin 1
    PORTD->PCR[BLUE_LED_PIN] |= PORT_PCR_MUX(1);		//choosing port d pin 1 as gpio
    GPIOD->PDDR |= (1 << BLUE_LED_PIN);					//setting pin direction as output
}
