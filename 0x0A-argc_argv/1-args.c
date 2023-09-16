#include <stdio.h>

/**
 * main - print the number of agruements passed into it
 * @argc: number of command line arguements
 * @argv: an array of command line arguements
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
