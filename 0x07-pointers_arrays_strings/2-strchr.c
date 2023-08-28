#include "main.h"

/**
 * _strchr - locates a charater in a string
 * @s: pointer to the string
 * @c: the character to locate
 * Return:  first occurrence of c
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
