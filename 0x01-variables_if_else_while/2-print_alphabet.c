#include <stdio.h>

/**
  *main - Entry point
  *Description: alphabets
  *Return: 0 (success)
  */
int main(void)
{
	int lowcase = 97;

		while (lowcase <= 122)
	{
		putchar(lowcase);
		lowcase++;
	}
	putchar('\n');
	return (0);
}

