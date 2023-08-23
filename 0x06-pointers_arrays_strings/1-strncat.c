#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: to str
 * @src: from str
 * @n: nums to be added
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int destL = 0;

	while (dest[i++])
	{
		destL++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[destL++] = src[i];
	}
	return (dest);
}
