#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: the array
 * @n: the number of times for a to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
		i++;
	}
	printf("\n");
}
