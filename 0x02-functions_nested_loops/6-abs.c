#include "main.h"

/**
  *_abs - Entry point
  *@c: the alphabets in lower case
  *Return: 1 (success)
  */
int _abs(int c)
{
	int abs_val;

	if (c < 0)
	{
	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
