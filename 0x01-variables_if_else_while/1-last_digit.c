#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * "This program will assign a random number
 * to the variable n each time it is executed"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("the last digit of %d is %d and is greater than 5", n, ld);
	}
	else if (ld == 6)
	{
		printf("the last digit of %d is %d and is 5", n, ld);
	}
	else
	{
		printf("the last digit of %d is %d and is less than 6 and not 0", n, ld);
	}
	return (0);
}
