#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *random_char - Entry point
  *generate_password - another function
  *main - another function
  *Description:  a program that generates random valid passwords
  *Return: 0 (success)
  */
char random_char(void)
{
	return ('!' + (rand() % 94));
}
void generate_password(int length)
{
	char password[length + 1];
	srand(time(NULL));
	int i = 0;

	while (i < length)
	{
		password[i] = random_char();
	}
	password[length] = '\0';
	printf("Random Password: %s\n", password);
}
int main(void)
{
	int password_length = 10;
	generate_password(password_length);
	return (0);
}
