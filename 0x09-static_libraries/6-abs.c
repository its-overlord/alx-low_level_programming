#include "main.h"

/**
 * _abs - computes the absoulte value of a numbe r
 * @n: number
 * Return: the absolute value of the number
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	else
		n = n;
	return (n);
}
