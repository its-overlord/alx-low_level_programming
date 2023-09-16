#include <stdio.h>

/**
 * main - print the file name
 * @argc: number of command line arguements
 * @argv: an array of command line arguements
 * Return: 0 at success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
