#include "main.h"

/**
  *_strcpy - copy the string pointed by src
  *@dest: destion
  *@src: source
  *Return: the copied string
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int a = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	while (a < i)
	{
		a++;
		dest[a] = src[a];
	}
	dest[i] = '\0';
	return (dest);
}
