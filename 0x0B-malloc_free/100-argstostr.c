#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


/**
  *_strncpy - Entry point
  *Description: a function that fills memory with a constant byte.
  *@ac: parameter one
  *@av: parameter two
  *Return: 0 (success)
  */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i = 0;
	char *concatenated;
	int current_position = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		total_length += strlen(av[i]) + 1;
	}
	concatenated = (char *)malloc(total_length + 1);
	if (concatenated == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		strcpy(concatenated + current_position, av[i]);
		current_position += strlen(av[i]);
		concatenated[current_position++] = '\n';
	}
	concatenated[current_position] = '\0';
	return (concatenated);
}
