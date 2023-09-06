#include "main.h"

/**
 * print_most_numbers - prints the numbers, form 0 to 9
 */
void print_most_numbers(void)
{
	int num = '0';

	while (num <= '9')
	{
		if (num == '2' || num == '4')
			num++;
		else
		{
			_putchar(num);
			num++;
		}
	}
	_putchar('\n');
}
