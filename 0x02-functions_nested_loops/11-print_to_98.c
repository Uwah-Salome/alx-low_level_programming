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
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	_putchar(n);
	_putchar('\n');
	break;
	}
	else
	{
	_putchar(n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	_putchar(n);
	_putchar('\n');
	break;
	}
	else
	_putchar(n);
	}
	}
}
