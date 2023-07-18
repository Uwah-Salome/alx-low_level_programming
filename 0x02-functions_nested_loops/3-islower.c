#include "main.h"
/**
  *_islower - Entry point
  *int c: a function that checks for lowercase character.
  *c: the alphabets in lower case
  *Return: 1 (success)
  */
int _islower(void)
{
	int c;

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
