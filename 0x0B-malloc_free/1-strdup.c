#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string to be duplicated
 *
 * Return: pointer to a duplicate of the string str
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	j = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++);
	ptr = malloc((i + 1) * sizeof(char));

	if (ptr != NULL)
	{
		while (j < i)
		{
			ptr[j] = str[j];
			j++;
		}
		ptr[j] = '\0';
		return (ptr);
	}
	else
		return (NULL);
	free(ptr);
}
