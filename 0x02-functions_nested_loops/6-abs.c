#include "main.h"

/**
 * _abs omputes the absolute value of an integer.
 * @c: the number to be checked
 * Return: Absolute value of a number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
