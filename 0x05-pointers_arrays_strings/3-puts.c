#include "main.h"

/**
 * _puts - prints string, followed by new line
 * @str: the string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
