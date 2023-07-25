#include <stdio.h>

/**
  *puts2 - Entry point
  *Description:print every other character of a string using putst2
  *@str: parameter used
  *Return: 0 (success)
  */
void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str += 2;
	}
	putchar('\n');
}
