#Include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 */
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);

	if (str == NULL)
		exit(98);

	return (str);
}
