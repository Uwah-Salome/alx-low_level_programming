#include "main.h"

/**
  *main - Entry point
  *Description:prints the alphabet, in lowercase,\n
  *Return: 0 (success)
  */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}
