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
	int n, Digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Digit = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, Digit);
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, Digit);
	if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Digit);
	return (0);
}
