#include <stdio.h>
/**
  *main - Entry point
  *Descrption : Print all alphabets except q and e
  *Return: 0 (success)
  */
int main(void)
{
	int alp = 97;

	while (alp <= 122)
	{
		if (alp == 101 || alp == 113)
		{
			alp++;
			continue;
		}
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
