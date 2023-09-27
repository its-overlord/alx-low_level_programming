#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a duplicate of the string str
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = j = k = 0;

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
		if (s1)
		{
			while (s1[j] != '\0')
			{
				ptr[j] = s1[j];
				j++;
			}
		}

		if (s2)
		{
			while (s2[k] != '\0')
			{
				ptr[j] = s2[k];
				k++;
				j++;
			}
		}
		ptr[j] = '\0';
		return (ptr);
		free(ptr);
	}
	else
		return (NULL);
}
