#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = n - 1;

	for (j = 0; j < n / 2; j++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i--;
	}
}
