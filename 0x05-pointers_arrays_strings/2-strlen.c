#include "main.h"

/**
  *_strlen - Entry point
  *Description:a function that returns the length of a string
  *@s: parameter to be used.
  *Return: 0 (success)
  */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
