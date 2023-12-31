#include "main.h"
#include <stdio.h>

/**
  *_strncat - Entry point
  *Description: a function that concatenates two strings.
  *@dest: parameter one
  *@src: parameter two
  *@n: parameter three
  *Return: 0 (success)
  */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}
	*dest_ptr = '\0';
	return (dest);
}
