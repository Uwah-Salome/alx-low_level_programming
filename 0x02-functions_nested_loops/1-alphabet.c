#include "main.h"

/**
  *print_alphabet - Entry point
  *Description:prints the alphabet, in lowercase,\n
  *Return: 0 (success)
  */
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
