#include "main.h"

/**
  *_strspn - Entry point
  *@s: input
  *@accept: another input
  *Return: 0
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	if (*s)
	{
		i = 0;
		while (accept[i])
		{
			i++;
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	else
	{
		return (n);
	}
	return (0);
}
