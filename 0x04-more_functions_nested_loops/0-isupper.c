#include "main.h"

/**
  *_isupper - Entry point
  *Description: a function that checks for uppercase character.
  *@c : character to be checked
  *Return: 1 (success)
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
