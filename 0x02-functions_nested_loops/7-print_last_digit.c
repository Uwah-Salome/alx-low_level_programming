#include "main.h"

/**
  *print_last_digit - Entry point
  *C - C is a parameter of _islower function
  *@c: the alphabets in lower case
  *Return: 1 (success)
  */
int print_last_digit(int c)
{
	int last;

	last = c % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
