#include "main.h"

/**
  *_strlen - Returns the lenght of a string
  *@s: string
  *Return: 0 or 1
  */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
