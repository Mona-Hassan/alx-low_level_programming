#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: input
 * Return: printing
 */
void puts2(char *str)
{
	int l = 0;
	int m = 0;
	char *x = str;
	int z;

	while (*x != '\0')
	{
		x++;
		l++;
	}
	m = l - 1;
	for (z = 0; z <= m; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
