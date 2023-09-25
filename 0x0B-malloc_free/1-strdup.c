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
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++);
	ptr = malloc((i + 1) * sizeof(char));

	if (ptr != NULL)
	{
		while (str[i] != '\0')
		{
			ptr[i] = str[i];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	else
		return (NULL);
	free(ptr);
}
