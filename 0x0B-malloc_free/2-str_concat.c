#include "main.h"

/**
 * _str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a duplicate of the string str
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, J;

	j = 0;

	for (i = 0; s1[i] != '\0'; i++)
		;

	while (s2[j] != '\0')
	{
		j++;
		i++;
	}


	ptr = malloc((i + 1) * sizeof(char));

	if (ptr != NULL)
	{
		j = 0;

		while (while s1[j] != '\0')
		{
			ptr[j] = s1[j];
			j++;
		}

		while (s2[j] != '\0')
		{
			ptr[j] = s2[j];
			j++;
		}

		ptr[j] = '\0';

		return (ptr);
	}
	else
		return (NULL);
	free(ptr);
}
