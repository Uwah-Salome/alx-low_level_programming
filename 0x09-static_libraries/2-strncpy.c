#include "main.h"


/**
  *_strncpy - Entry point
  *Description: a function that fills memory with a constant byte.
  *@dest: parameter one
  *@dest: parameter two
  *@n: parametere three
  *Return: 0 (success)
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
