#include "main.h"
#include <stdio.h>

/**
  *_strcmp - Entry point
  *Description:a function that compares two strings.
  *@s1: parameter one
  *@s2: parameter two
  *Return: 0 (success)
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return ((*s1 > *s2) ? 15 : -15);
		}
		s1++;
		s2++;
	}
	return (0);
}
