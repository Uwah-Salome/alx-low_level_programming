#include "main.h"

/**
  *_strpbrk - page break
  *@s: input one
  *@accept: input two
  *Return: 0
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	if (*s)
	{
		i = 0;
		while (accept[i])
		{
			i++;
			if (*s == accept[i])
				return (s);
		}
	s++;
	}
	else
	{
		return ('\0');
	}
}
