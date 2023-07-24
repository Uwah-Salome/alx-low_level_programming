#include "main.h"
#include <stdio.h>

/**
  *_puts - Entry point
  *Description: a function that prints a string
  *@str: parameter to be used
  *Return: 0 (success)
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
