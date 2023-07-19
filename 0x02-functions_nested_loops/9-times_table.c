#include "main.h"
#include <stdio.h>
/**
  *times_table - Entry point
  *Description: a function that prints the 9 times table, starting with 0
  *Return: 1 (success)
  */
void times_table(void)
{
	int num = 0;
	int result = 0;

	while (num <= 9)
	{
		result = num * 9;
		_putchar('9');
		_putchar(' ');
		_putchar('x');
		_putchar(' ');
		_putchar(num + '0');
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		_putchar(result / 10 + '0');
		_putchar(result % 10 + '0');
		_putchar('\n');
		num++;
	}
}
