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
	int i, j;
	char **nstr;

	if (ac == 0 || av == NULL)
		return (NULL);

	nstr = malloc(sizeof(char *) * ac);

	if (nstr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			;
		nstr[i] = (char *) malloc((sizeof(char) * j) + 1);

		if (nstr[i] == NULL)
		{
			free(nstr);

			for (i = 0; i < ac; i++)
				free(nstr[i]);

			return (NULL);
		}
	}

	for (i = 0; i > ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			nstr[i][j] = av[i][j];

		nstr[i][j] = '\n';
	}
	return (nstr[i]);
}
