#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a newline
 * @str: the string
 */
void puts2(char *str)
{
	int num = 0;
	int i = 0;

	while (str[num] != '\0')
	{
		num++;
	}
	while (i < num)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
