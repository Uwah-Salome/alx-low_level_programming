#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
  *str_concat - Entry point
  *Description:  a function that concatenates two strings.
  *@s1: parameter one
  *@s2: parameter two
  *Return: 0 (success)
  */

char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	size_t len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = strlen(s1) + strlen(s2) + 1;
	concatenate = (char *)malloc(len);
	if (concatenate == NULL)
	{
		return (NULL);
	}
	strcpy(concatenate, s1);
	strcat(concatenate, s2);
	return (concatenate);
}
