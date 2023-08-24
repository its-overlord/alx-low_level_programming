#include "main.h"

/**
 * _strcat - concaatenates two strings
 * @dest: destination string
 * (to which the source string will be appended)
 * @src: source string
 * (which will be appended to the destination string)
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	int cnt = 0;
	int num = 0;

	while (dest[cnt] != '\0')
	{
		cnt++;
	}
	while (src[num] != '\0')
	{
		dest[cnt] = src[num];
		num++;
		cnt++;
	}
	dest[cnt] = '\0';
	return (dest);
}
