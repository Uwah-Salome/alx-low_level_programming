#include "main.h"
#include <stdio.h>

/**
  *print_square - Entry point
  *Description: Print Square
  *@size: number of parameter to be checked
  *Return: 0 (success)
  */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

