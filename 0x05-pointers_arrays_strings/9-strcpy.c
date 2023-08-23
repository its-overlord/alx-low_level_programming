#include "main.h"

/**
 * *_strcpy - copys the content of the source string to
 * the destination string
 * @src: the source string
 * @dest: the destination string
 * Retutn: the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;
	int i;

	while (src[count] != '\0')
	{
		count++;
	}
	while (i < count)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
