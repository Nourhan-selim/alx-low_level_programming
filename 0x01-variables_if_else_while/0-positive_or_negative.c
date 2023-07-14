#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: 0-positive_or_negative.c
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%ld is positive", n);
	if (n == 0)
		printf("%ld is zero", n);
	if (n < 0)
		printf("%ld is negative", n);
	return (0);
}
