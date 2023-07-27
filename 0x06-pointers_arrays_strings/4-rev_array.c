#include "main.h"
#include <stdio.h>

/**
  *reverse_array - Entry point
  *Description: a function that reverses the content of an array of integers
  *@a: parameter one
  *@n: parametere two
  *Return: 0 (success)
  */
void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
