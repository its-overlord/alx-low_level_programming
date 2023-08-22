#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @s: the string
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		*s++;
	}
	return (count);
}
