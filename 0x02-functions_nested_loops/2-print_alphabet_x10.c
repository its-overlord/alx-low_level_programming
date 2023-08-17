#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int alpha, num;

	alpha = 'a';
	num = 0;

	while (num < 10)
	{
		while (alpha < 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		num++;
	}
}
