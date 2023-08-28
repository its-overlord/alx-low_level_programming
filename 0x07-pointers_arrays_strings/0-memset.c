#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer to the starting address of the memory to be filled
 * @b: the value to be set
 * @n: the number of byte to be filled starting from s
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
