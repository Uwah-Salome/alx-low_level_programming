#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
  *malloc_checked - Entry point
  *_putchar - requirement
  *Description: a function that allocates memory using malloc
  *@c: The character to be written
  *@b: input
  *Return: ptr
  */
void _putchar(char c);

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		char error_message[] = "Memory allocation failed. Exiting with status 98.\n";
		int i = 0;

		while (error_message[i] != '\0')
		{
			_putchar(error_message[i]);
			i++;
		}
		exit(98);
	}
	return (ptr);
}
/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
