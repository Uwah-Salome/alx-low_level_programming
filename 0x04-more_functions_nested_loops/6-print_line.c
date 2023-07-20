#include "main.h"
#include <stdio.h>

/**
  *print_line - Entry point
  *Description: a function that draws a straight line in the terminal.
  *@n:is the number of times the character _ should be printed
  *Return: 0 (success)
  */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
