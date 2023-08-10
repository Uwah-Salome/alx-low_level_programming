#include "main.h"
#include <stdio.h>

/**
  *_isupper - Entry point
  *Description: a function that prints alphabets in uppercase
  *@c: parameter used
  *Return: 0  or 1(success)
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
