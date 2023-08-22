#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: first point to an int
 * @b: second pointer to an int
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
