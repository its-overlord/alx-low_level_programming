#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the number of arguements
 * @av: the arguements
 *
 * Return: a pointer to the concatenated string (Success)
 * or NULL (Error)
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *nstr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++;
	}

	nstr = malloc((sizeof(char) * size) + 1);

	if (nstr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			nstr[k] = av[i][j];

		nstr[k] = '\n';
	}
	nstr[k] = '\0';
	return (nstr);
}
