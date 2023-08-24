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
	while (*s1 != '\0')
	{
		if (*s1 == *s2)
			return (0);
		else
		{
			return(*s1 - *s2);
			break;
		}
		s1++;
		s2++;
	}
}
