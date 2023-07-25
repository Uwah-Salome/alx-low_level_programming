#include "main.h"
#include <stdio.h>
/**
  *puts2 - Entry point
  *Description:print every other character of a string using putst2
  *@str: parameter used
  *Return: 0 (success)
  */
void puts2(char *str)
{
	int a, b = 0;
	int d;

	while (*str != '\0')
	{
		str++;
		a++;
	}
	b = a - 1;
	for (d = 0; d <= b; d++)
	{
		if (d % 2 == 0)
		{
			putchar(str[d]);
		}
	}
	putchar('\n');
}
