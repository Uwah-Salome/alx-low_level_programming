#include <stdio.h>
#include <stdlib.h>


/**
  *create_array - Entry point
  *Description:a function that creates an array of chars, 
  * and initializes it with a specific char.
  *@size: parameter one
  *@c: parameter two
  *Return: 0 (success)
  */ 
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
	{
		return NULL;
	}
	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
	{
		return NULL;
	}
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return array;
}
