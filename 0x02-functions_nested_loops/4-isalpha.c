#include "main.h"

/**
  *_isalpha - Entry point
  *C - C is a parameter of _islower function
  *@c: the alphabets in lower case and uppercase
  *Return: 1 (success)
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
