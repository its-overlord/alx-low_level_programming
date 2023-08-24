#include "main.h"

/**
 * string_toupper - chaages all lowercase letters to a string of uppercase
 * @s: the string
 * Return: the string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
