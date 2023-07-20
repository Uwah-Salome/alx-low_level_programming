#include "main.h"
#include <stdio.h>

/**
  *print_most_numbers - Entry point
  *Description: prints the numbers, from 0 to 9 except 2&4
  *Return: 0 (success)
  */
void print_most_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		if (!(c == 50 || c == 52))
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
