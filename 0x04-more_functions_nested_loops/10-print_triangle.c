#include "main.h"
#include  <stdio.h>

/**
  *print_triangle - Entry point
  *Description: a function that prints a triangle using #
  *@size: parameter
  *Return: 0 (success)
  */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size; b++)
			{
				_putchar(' ');
			}
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
