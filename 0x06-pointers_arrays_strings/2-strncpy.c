#include "main.h"

/**
 * _strncpy -  copies a string.
 * @dest: to str
 * @src: from str
 * @n: numbers to be copied
 * Return: str dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int srcL = 0;

	while (src[i++])
	{
		srcL++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for ( i = srcL; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
