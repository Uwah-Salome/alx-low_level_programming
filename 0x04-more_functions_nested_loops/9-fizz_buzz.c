#include <stdio.h>
#include <unistd.h>

/**
  *_putchar - entry point
  * print_fizzbuzz: - Another function
  * main: - function execution point
  *Description: Print _putchar
  *@c: first parameter
  *Return: 0 (success)
  */
int _putchar(char c)
{
	return write(1, &c, 1);
}
void print_fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			int num = i;
			do
			{
				_putchar('0' + num % 10);
				num /= 10;
			}
			while (num > 0);
		}
		_putchar(' ');
	}
	_putchar('\n');
}

int main(void)
{
	print_fizzbuzz();
	return (0);
}
