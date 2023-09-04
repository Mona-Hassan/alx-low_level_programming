#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: the copied str
 */
char *_strdup(char *str)
{
	int a = 0;
	int b = 1;
	char *z;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[b])
	{
		b++;
	}
	z = malloc((sizeof(char) * b) + 1);
	if (z == NULL)
	{
		return (NULL);
	}
	while (a < b)
	{
		z[a] = str[a];
		a++;
	}
	z[a] = '\0';
	return (z);
}
