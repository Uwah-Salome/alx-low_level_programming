#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
  *cap_string - Entry point
  *Description:  a function that capitalizes all words of a string.
  *@str: parameter one
  *Return: 0 (success)
  */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (capitalize_next && islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
		*ptr == ',' || *ptr == ';' || *ptr == '.' ||
		*ptr == '!' || *ptr == '?' || *ptr == '"' ||
		*ptr == '(' || *ptr == ')' || *ptr == '{' ||
		*ptr == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}
		ptr++;
	}
	return (str);
}
