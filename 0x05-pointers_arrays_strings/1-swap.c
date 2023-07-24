#include "main.h"

/**
  *swap_int - Entry point
  *Description: Print _putchar
  *Return: 0 (success)
  */
void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
