#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int count = 0;
	int i;

	while (str[count] != '\0')
	{
		count++;
	}

	if (count % 2 == 0)
	{
		i = count / 2;
		i += 1;
		while (i <= count)
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		int n;

		n = (count - 1) / 2;

		while (n <= count)
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	_putchar('\n');
}
