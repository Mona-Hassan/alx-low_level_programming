#include "main.h"

/**
 * rev_string - reverse str
 * @s: input str
 * Return: str in reverse
 */
void rev_string(char *s)
{
	char r = s[0];
	int count = 0;
	int x;

	while (s[count] != '\0')
	{
		count++
	}
	for (x = 0; x < count; x++)
	{
		count--;
		r = s[x];
		s[x] = s[count];
		s[count] = r;
	}
}
