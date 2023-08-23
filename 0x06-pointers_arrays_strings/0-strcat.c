#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: to str
 * @src: from str
 * Return: str dest
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y;

	while (dest[x])
	{
		x++;
	}
	for (y = 0; src[y] != 0; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
