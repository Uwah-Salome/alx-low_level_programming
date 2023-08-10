#include "main.h"


/**
  *_memcpy - Entry point
  *Description: a function that copies memory
  *@dest: parameter one
  *@src: parameter two
  *@n: parametere three
  *Return: 0 (success)
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = 0;

	while (a < i)
	{
		a++;
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
