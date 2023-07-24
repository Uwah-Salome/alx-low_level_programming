#include <stdio.h>
#include <string.h>

/**
  *rev_string - Entry point
  *Description:a function that reverses a string.
  *@s: parameter used
  *Return: 0 (success)
  */
void rev_string(char *s)
{
	int length = strlen(s);
	int begin = 0;
	int end = length - 1;

	while (begin < end)
	{
		char temp = s[begin];

		s[begin] = s[end];
		s[end] = temp;
		begin++;
		end--;
	}
}
