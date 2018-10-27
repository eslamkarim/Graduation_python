/*
 * ExtruderControl.c
 *
 * Created: 10/24/2018 7:35:17 PM
 * Author : PRISCA
 */ 
#define F_CPU 8000000UL
#include <avr/io.h>
#include "Gpio.h"
#include "LCD_4bit.h"

#include "stdint.h"
#include <util/delay.h>


int main(void)
{
	Lcd_Enable();
	Write_Data('n');
	_delay_ms(1000);
	while (1)
	{
	}
}
