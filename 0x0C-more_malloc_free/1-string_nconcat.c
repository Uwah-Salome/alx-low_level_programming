#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *string_nconcat - Entry point
  *Description: a function that concatenates 2 strings
  *@s1: parameter one
  *@s2: parameter two
  *@n: parametere three
  *Return: 0 (success)
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = strlen(s1);
	unsigned int len_s2 = strlen(s2);
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len_s2)
		n = len_s2;
	result = (char *)malloc(len_s1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strncpy(result, s1, len_s1);
	strncpy(result + len_s1, s2, n);
	result[len_s1 + n] = '\0';
	return (result);
}
