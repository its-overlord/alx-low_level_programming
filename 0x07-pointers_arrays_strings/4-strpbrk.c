#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to be sesrched
 * @accept: pointer to string that defines
 * the set of characters you're interested in
 * Return: a pointer to the first occurrence of any
 * character from the accept set within the s
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while  (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}
