#include "main.h"

/**
 * print_square - draws a square on the terminal.
 * @size: times to draw a square
 * Return: nothing
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; a++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
