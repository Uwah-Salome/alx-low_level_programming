#include "main.h"
/**
  *print_sign - Entry point
  *@n: prints the sign of a number
  *Return: 1 (success)
  */
int print_sign(int n)
{
	if (n >= 1)
	{
	_putchar('+');
	return (1);
	}
	if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	_putchar('-');
	return (-1);
}
