#include <stdio.h>

/**
 * main - entry point
 * desc: prints putchar
 * Return: Always 00
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
