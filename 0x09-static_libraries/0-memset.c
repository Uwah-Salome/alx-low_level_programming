#include"main.h"

/**
  *_memset - Entry point
  *Description: a function that fills memory with a constant byte.
  *@s: parameter one
  *@b: parameter two
  *@n: parametere three
  *Return: 0 (success)
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		i++;
		s[i] = b;
		n--;
	}
	return (s);
}
