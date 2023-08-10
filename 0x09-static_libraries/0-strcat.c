#include "main.h"
/**
  *_strcat - Entry point
  *Description: a function that fills memory with a constant byte.
  *@dest: parameter one
  *@src: parameter two
  *Return: 0 (success)
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
