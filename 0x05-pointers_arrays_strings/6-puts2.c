#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a newline
 * @str: the string
 */
void put2(char *str)
{
	int num = 0;

	while (str[num] != '\0')
	{
		_putchar(str[num]);
		num + 2;
	}
	_putchar('\n');
}
