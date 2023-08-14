#include <stdio.h>

/**
 * main - prints the alphabet
 * first in lowercase, and then in uppercase
 * Return: 0 if successful
 */
int main(void)
{
	int a, A;

	a = 97;
	A = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (A <= 90)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
