#include "main.h"
#include <stdio.h>

/**
  *_memset - Entry point
  *Description: a function that fills memory with a constant byte.
  *@s: parameter one
  *@b: parameter two
  *@n: parametere three
  *Return: 1 (success)
  */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
