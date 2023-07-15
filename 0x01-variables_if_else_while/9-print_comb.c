#include <stdio.h>
/**
  *main - entry point
  *Description: possible combinations of single-digit numbers (, )
  *Return: 0 (success)
  */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
