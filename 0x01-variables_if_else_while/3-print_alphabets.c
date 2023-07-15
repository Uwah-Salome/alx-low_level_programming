#include <stdio.h>
/**
 *main - Entry point
 *Description: alphabetsin lower case and uppercase
 *Return: 0 (success)
 */
int main(void)
{
	int lowcase = 97;
	int uppercase = 65;

	while (lowcase <= 122)
	{
		putchar(lowcase);
		lowcase++;
	}
	while (uppercase <= 90)
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
