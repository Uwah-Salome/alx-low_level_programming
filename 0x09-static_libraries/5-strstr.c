#include "main.h"

/**
  *_strstr - Entry point
  *@haystack: input
  *@needle: input
  *Return: 0
  */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
