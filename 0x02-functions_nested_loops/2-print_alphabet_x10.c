#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int alpha, num;

	for (num = 0; num < 10; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
