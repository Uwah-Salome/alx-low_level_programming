#include "main.h"
#include <stdio.h>

/**
  *_isdigit - Entry point
  *Description:  a function that checks for a digit (0 through 9)
  *@c : The parameter to be checked
  *Return: 1 (success)
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
