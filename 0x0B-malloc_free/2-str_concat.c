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
	int i, j, k;

	for (i = 0; s1[i] != '\0'; i++)
		;
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
		i++;
	}
	ptr = malloc((i + 1) * sizeof(char));
	if (ptr != NULL)
	{
		j = 0;
		if (s1 != NULL)
		{
			while (s1[j] != '\0')
			{
				ptr[j] = s1[j];
				j++;
			}
		}
		else
		{
			ptr[j] = '\0';
			j++;
		}
		if (s2 != NULL)
		{
			k = 0;
			while (s2[k] != '\0')
			{
				ptr[j] = s2[k];
				k++;
				j++;
			}
		}
		else
		{
			ptr[j] = '\0';
			j++;
		}
		ptr[j] = '\0';
		return (ptr);
		free(ptr);
	}
	else
		return (NULL);
}
