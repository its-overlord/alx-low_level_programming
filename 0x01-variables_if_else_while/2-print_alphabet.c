#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * Return: 0 of successful
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
