#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: the number of command line arguments
 * @argv: an array of command line arguements
 * Return: alway 0 at success
 */
int main(int argc, char *argv[])
{
	int deno[] = {25, 10, 5, 2, 1};
	int i, j, num;

	j = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= deno[i])
		{
			j++;
			num -= deno[i];
		}
	}

	printf("%d\n", j);
	return (0);
}
