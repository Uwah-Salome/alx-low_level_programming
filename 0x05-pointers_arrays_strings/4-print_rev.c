#include "main.h"
#include <stdio.h>

/**
  *print_rev - Entry point
  *Description: A function that prints a string, in reverse.
  *@s: parameter to used
  *Return: 0 (success)
  */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i > 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
