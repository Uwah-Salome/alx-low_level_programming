#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *puts_half - Entry point
  *Description: a function that prints half of a string
  *@str: parameter used
  *Return: 0 (success)
  */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index = (length - 1) / 2;
	int i = start_index;

	while (i < length)
	{
		i++;
		putchar(str[i]);
	}
	putchar('\n');
}
