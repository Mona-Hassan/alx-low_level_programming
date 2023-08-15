#include "main.h"

/**
 * _isalpha - print lowercase or uppercase
 * @c: char to be checked
 * Return: 1 if c is lowercase or uppercase or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	{
		return (1);
	}
	return (0);

}
