#include "main.h"
#include <stdio.h>

/**
  *print_diagonal - Entry point
  *Description:a function that draws a diagonal line on the terminal.
  *@n: the parameter to be printed
  *Return: 0 (success)
  */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < n; a++)
	{
	for (b = 0; b < a; b++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
}
