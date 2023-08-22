#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: copied to
 * @str: copied from
 * Return: str
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int z = 0;

	while (*(str + y) != '\0')
	{
		y++;
	}
	for ( ; z < y; z++)
	{
		dest[z] = str[z];
	}
	dest[y] = '\0';
	return (dest);
}
