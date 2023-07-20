#include <stdio.h>
#include <stdbool.h>
#include "main.h"
#include <math.h>
#include <unistd.h>
/**
  *_putchar - another fuction to write
  *@c: parameter to be used
  *Return: 1 (success)
  */

int _putchar(char c)
{return write(1, &c, 1); }
/**
  *main - Entry point
  *Description: prints the largest prime factor of the number 612852475143
  *Return: 0 (success)
  */
int main(void)
{
	long int n = 612852475143;
	long int max = -1;
	long int a;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	for (a = 3; a <= sqrt(n); a = a + 2)
	{
		while (n % a == 0)
		{
			max = a;
			n = n / a;
		}
	}
	if (n > 2)
		max = n;
	_putchar(max);
	return (0);
}
