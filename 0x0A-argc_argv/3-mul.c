#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples two numbers
 * Return: always 0
 */
int main(int argc, char*argv[])
{
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
		printf("%d\n", i * j);
	return (0);
}
