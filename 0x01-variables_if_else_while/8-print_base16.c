#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 at success
 */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i < 10)
			putchar('0' + i);
		else
			putchar('a' + i - 10);
		i++;
	}
	putchar('\n');
	return (0);
}
