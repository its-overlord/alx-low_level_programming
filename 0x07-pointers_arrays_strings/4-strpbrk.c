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
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[i] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
