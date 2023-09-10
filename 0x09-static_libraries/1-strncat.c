#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * (to which the source string will be appended)
 * @src: source string
 * (which will be appended to the destination string)
 * @n: the number of byte to concatenate
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int cnt = 0;
	int num = 0;

	while (dest[cnt] != '\0')
	{
		cnt++;
	}
	while (src[num] != '\0' && num < n)
	{
		dest[cnt] = src[num];
		num++;
		cnt++;
	}
	dest[cnt] = '\0';
	return (dest);
}
