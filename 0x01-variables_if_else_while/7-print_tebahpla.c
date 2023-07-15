#include <stdio.h>
/**
  *main - enrty point
  *Description : alphabets in reverse order
  *Return: 0 (success)
  */
int main(void)
{
	int Z = 122;

	while (Z >= 97)
	{
		putchar(Z);
		Z--;
	}
	putchar('\n');
	return (0);
}
