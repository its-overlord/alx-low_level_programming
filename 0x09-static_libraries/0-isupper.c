#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: the character
 * Return: 1 if c is uppercase
 * otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <=  'Z')
		return (1);
	return (0);
}
