#include <stdio.h>

/**
  *main - Entry point
  *Description: alphabets
  *Return: 0 (success)
  */
int main(void)
{
	char alphabet = 'a';

	for (; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

