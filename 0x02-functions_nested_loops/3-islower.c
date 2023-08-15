#include "main.h"

/**
 * _islower - prints lowercase
 * Return 1 on success or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
