#include "main.h"
#include <stdio.h>
/**
  *print_to_98 -Entry point Function
  *@n: natural numbers from n to 98
  *Return: 1 (success)
  */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n > 98)
		{
			_putchar(n);
			_putchar(' ');
			n--;
		}
		_putchar('\n');
	}
	else
	{
		while (n < 98)
		{
			_putchar(n);
			_putchar(' ');
			n++;
		}
		_putchar('\n');
	}
}
