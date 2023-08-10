#include "main.h"

/**
  *_puts - prints a string to stdout \n
  *@s: the string
  */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
