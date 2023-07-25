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
	int length_of_the_string = strlen(str);
	int n = (length_of_the_string - 1) / 2;
	int i = n;

	while (i < length_of_the_string)
	{
		i++;
		putchar(str[i]);
	}
	putchar('\n');
}
