#include "main.h"

/**
 **_strspn - gets the length of a prefix substring
  * @s: string to evaluate
  * @accept: string containing the list of characters to match in s
  *
  * Return: the number of bytes in the initial segment
  * of s which consist only of bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count, flag;

	for (i = 0; i != '\0'; i++)
	{
		flag = 0;

		for (j = 0; j != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				flag = 1
			}
		}
		if (flag == 0)
			return (count);
	}
}
