#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *_strdup - Entry point
  *Dscptn:function that returns a pointer to a newly allocated space in memory
  *@str: parameter one
  *Return: 0 (success)
  */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	duplicate = (char *)malloc(strlen(str) + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
