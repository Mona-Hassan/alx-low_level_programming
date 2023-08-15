#include <stdio.h>

/**
 * _putchar - writes a
 * Return: 1 on success
 * On error: -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
