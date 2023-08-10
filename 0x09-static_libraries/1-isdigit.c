#include "main.h"

/**
  *_isdigit - Entry point
  *Description: a function thatprints only digits
  *@c: parameter one
  *Return: 0 (success)
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
