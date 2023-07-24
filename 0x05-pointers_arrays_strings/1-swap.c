#include "main.h"

/**
  *swap_int - Entry point
  *Description: a function that swaps the values of two integers
  *@a: Parameter one
  *@b: parameter two
  *Return: 0 (success)
  */
void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
