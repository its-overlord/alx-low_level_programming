#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of command line arguements
 * @argv: an array of command line arguements
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
