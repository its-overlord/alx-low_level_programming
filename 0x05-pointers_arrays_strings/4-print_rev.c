#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count - 1);
}

/**
 * print_rev - A function that prints string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int num;

	num = _strlen(s);

	while (num >= 0)
	{
		_putchar(s[num]);
		num--;
	}
	_putchar('\n');
}
