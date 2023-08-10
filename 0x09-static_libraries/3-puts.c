#include "main.h"

/**
  *_puts - prints a string to stdout \n
  *@s: the string
  */
void _puts(char *s)
{
	char *str;

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
