#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * Return: 0 of successful
 */
int main(void)
{
	char a = 97;

	while (a <= 122)
	{
		if (a == 113 || a == 101)
			continue;
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
