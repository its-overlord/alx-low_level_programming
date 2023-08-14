#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0 if successful
 */
int main(void)
{
	char z = 122;

	while (z >= 97)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
