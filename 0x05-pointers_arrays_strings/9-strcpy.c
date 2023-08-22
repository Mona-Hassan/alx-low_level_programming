#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: copied to
 * @src: copied from
 * Return: str
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int z = 0;

	while (*(src + y) != ('\0'))
	{
		y++;
	}
	for ( ; z < y; z++)
	{
		dest[z] = src[z];
	}
	dest[y] = ('\0');
	return (dest);
}
