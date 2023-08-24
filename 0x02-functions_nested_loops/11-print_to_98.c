#include "main.h"

/**
 * print_to_98 - prints all the natural number
 * from n to 98
 * @n: first printed number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n++);
		}
		else if (n > 98)
		{
			printf("%d, ", n--);
		}
	}
	printf("98\n");
}
