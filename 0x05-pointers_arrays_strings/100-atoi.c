#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
  *_atoi - Entry point
  *Description: a function that convert a string to an integer.
  *@s: parameter
  *Return: 0 (success)
  */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
