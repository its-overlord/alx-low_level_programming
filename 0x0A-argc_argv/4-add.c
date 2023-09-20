#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string
 * Return: the int converted from the sting
 */
int _atoi(char *s)
{
	int i, sign, num, len, digit;

	i = 0;
	sign = 1;
	num = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len)
	{
		if (s[0] == '-')
		{
			sign = -1;
			i++;
		}

		if (s[i] >= '0' && s[i] <='9')
		{
			digit = s[i] - '0';
			num = num * 10 + digit;
		}
		i++;
	}
	return (num * sign);
}

/**
 * main - multiples two numbers
 * @argc: number of command line arguements
 * @argv: an array of command line arguements
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum, i, j, k;

	sum = 0;
	i = 1;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!(argv[i][j] < '9'&& argv[i][j] > '0'))
			{
				puts("Error");
				return (1);
			}
			j++;
		}
		i++;
	}
	for (k = 1; k < argc; k++)
	{
		sum += _atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}
