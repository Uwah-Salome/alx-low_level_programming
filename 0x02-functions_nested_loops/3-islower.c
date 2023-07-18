#include "main.h"
/**
  *_islower - Entry point
  *C - C is a parameter of _islower function
  *@c: the alphabets in lower case
  *Return: 1 (success)
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
