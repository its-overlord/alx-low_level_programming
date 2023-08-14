#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0 at success
 */
int main(void)
{
	int i, j, k;

	i = '0';

	while (i < '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < '7')
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
