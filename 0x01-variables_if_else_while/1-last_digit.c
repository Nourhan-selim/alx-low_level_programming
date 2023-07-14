#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: 1-last_digit.c
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit(n));
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit(n));
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit(n));
	return (0);
}
