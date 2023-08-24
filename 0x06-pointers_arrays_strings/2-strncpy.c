#include "main.h"

/**
 * _strncpy - copies two strings
 * @dest: destination string
 * (to which the source string will be copied)
 * @src: source string
 * (which will be copied to the destination string)
 * @n: the number of byte to copy
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int num = 0;

	while (src[num] != '\0' && num < n)
	{
		dest[num] = src[num];
		num++;
	}
	while (num < n)
	{
		dest[num] = '\0';
		num++;
	}
	return (dest);
}
