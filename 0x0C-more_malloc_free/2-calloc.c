#include <stdio.h>
#include <stdlib.h>


/**
  *_calloc - Entry point
  *Description: a function that fills memory with a constant byte.
  *@nmemb: parameter one
  *@size: parameter two
  *Return: 0 (success)
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < nmemb * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
