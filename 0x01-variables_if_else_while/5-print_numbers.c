#include <stdio.h>

/**
 * main - entry point
 * desc: all alphabet except q & e
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf(n);
		n++;
	}
	printf("\n");
	return (0);
}

