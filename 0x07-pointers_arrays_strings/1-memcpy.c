#include "main.h"
#include <stdio.h>


/**
  *_memcpy - Entry point
  *Description: a function that copies memory area.
  *@dest: parameter one
  *@src: parameter two
  *@n: parametere three
  *Return: 0 (success)
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		i++;
		dest[i] = src[i];
	}
	return (dest);
}
