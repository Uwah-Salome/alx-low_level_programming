#include "main.h"

/**
  *_isalpha - prints alphabets in low and uppercase
  *@c: input
  *Return: 1 if alphabet else 0
  */

int _isalpha(int c)
{
	while ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'z'))
	{
		return (c);
	}
	return (0);
}
