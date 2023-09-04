#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of arr
 * @c: chars in the arr
 * Return: arr
 */
char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *z;

	if (size == 0)
	{
		return (NULL);
	}
	z = malloc(size * sizeof(char));
	if (z == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < size; m++)
	{
		z[m] = c;
	}
	return (s);
}
