#include "main.h"
#include <stdio.h>

/**
  *print_numbers - Entry point
  *Description:  a function that prints the numbers, from 0 to 9
  *Return: 0 (success)
  */
void print_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
