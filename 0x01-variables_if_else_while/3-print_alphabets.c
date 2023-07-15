#include <stdio.h>
/**
 *main - Entry point
 *Description: alphabetsin lower case and uppercase
 *Return: 0 (success)
 */
int main(void)
{
	char lowcase = 'a';
	char uppercase = 'A';

	for (;lowcase <= 'z'; lowcase++)
	{
		putchar(lowcase);
	}
	putchar('\n');
	for (;uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
