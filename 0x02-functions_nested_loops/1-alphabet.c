#include <main.h>

/**
 * print_alphabet - entry point
 * Return: void
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a', c <= 'z', c++)
	{
		putchar(c);
	}
	putchar('\n');
}
