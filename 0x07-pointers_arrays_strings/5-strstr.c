#include "main.h"

/**
 * *_strstr - searches a string for any of a set of bytes
 * @haystack: pointer to string to be sesrched
 * @needle: pointer to the string that
 * represents the substring you're looking for
 * Return: a pointer to the first occurrence of any
 * character from the needle set within haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
