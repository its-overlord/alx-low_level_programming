#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 if successful
 */
int main(void)
{
	int i, j;

	i = 0;

	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i < j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
