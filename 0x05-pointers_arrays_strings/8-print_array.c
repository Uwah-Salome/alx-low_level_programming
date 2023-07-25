#include "main.h"
#include <stdio.h>
/**
  *print_array - Entry point
  *Description:a function that prints n elements of an array of integers
  *@n: parater 1
  *@a: parameter 2
  *Return: 0 (success)
  */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		i++;
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
