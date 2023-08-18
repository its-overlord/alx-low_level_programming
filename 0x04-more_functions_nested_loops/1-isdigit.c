#include "main.h"

/**
 * _isupper - checks for digit
 * @c: the digit
 * Return: 1 if c is digit
 * otherwise 0
 */
int _isupper(int c)
{
	if (c >= '0' && c >=  '9')
		return (1);
	else
		return (0);
}
