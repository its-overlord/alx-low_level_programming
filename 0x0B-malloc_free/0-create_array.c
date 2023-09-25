#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: the specfic char
 *
 * Return: NULL if size = 0,
 * a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	if (size == 0)
		return (NULL);

	i = (char *) malloc(size * sizeof(char));

	if (i != NULL)
	{
		for (j = 0; j < size; j++)
		{
			i[j] = c;
		}
		i[j] = '\0';

		return (i);
	}
	else
		return (NULL);
	free(i);
}
