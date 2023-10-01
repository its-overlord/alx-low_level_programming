#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of s2 character to concatenate
 *
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *s3;

	i = 0;

	l = 0;

	while (s1 && s1[i])
		i++;
	while (s2 && s2[l])
		l++;
	if (n > l)
		n = l;
	i = i + l + 1;
	s3 = malloc(sizeof(char) * i);

	if (s3 == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		s3[j] = s1[j];
	}

	for (k = 0; k < l; k++, j++)
	{
		s3[j] = s2[k];
	}
	s3[j] = '\0';
	return (s3);
}
