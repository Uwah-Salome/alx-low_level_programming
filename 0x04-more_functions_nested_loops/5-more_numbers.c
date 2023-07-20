#include "main.h"
#include <stdio.h>

/**
 *more_numbers - Entry point
 *Description: a function that prints 10 times the numbers, from 0 to 14
 *Return: 0 (success)
 */
void more_numbers(void)
{
	int c;
	int r;

	for (c = 0; c < 10; c++) 
	{
		for (r = 0; r <= 14; r++) 
		{
			if (r >= 10) 
			{
				_putchar('0' + r / 10);
			}
			_putchar('0' + r % 10);
		}
	_putchar('\n');	
	}
}
