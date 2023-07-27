#include "main.h"
#include <stdio.h>

/**
  *_strcat - Entry point
  *Description: a function that concatenates two strings.
  *@dest: parameter one
  *@src: parameter two
  *Return: 0 (success)
  */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
	return (dest);
}
