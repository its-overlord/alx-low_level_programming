#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * Return: 0 of successful
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
			a++;
		else
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');
	return (0);
}
