#include <stdio.h>
/**
  *main - Entry point
  *Return: 0 (success)
  */
int main(void)
{
	char Mychar;
	int Myint;
	long int MylongInt;
	long long int MyLongLongInt;
	float Myfloat;

	printf("Size of a char: %d byte(s)\n", sizeof(Mychar));
	printf("Size of an int: %d byte(s)\n", sizeof(Myint));
	printf("Size of a long int: %d byte(s)\n", sizeof(MylongInt));
	printf("Size of a long long int: %d byte(s)\n", sizeof(MyLongLongInt));
	printf("Size of a float: %d byte(s)\n", sizeof(Myfloat));
	return (0);
}
