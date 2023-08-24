#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: Pointer to the first string to be compared
 * @s2: Pointer to the second string to be compared
 * Return: 0 if both are the same
 * positive int if s1 is lexicographically greater s2
 * negative int if s2 is lexicographically greater s1
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 != '\0')
			return (0);
		s1++;
		s2++;
	}
	return(*s1 - *s2);
}
