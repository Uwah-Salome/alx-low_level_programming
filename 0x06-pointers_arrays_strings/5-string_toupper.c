#include "main.h"
#include <stdio.h>

/**
  *string_toupper - Entry point
  *Description:String to upper
  *@str: parameter to be used
  *Return: 0 (success)
  */
char* string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
