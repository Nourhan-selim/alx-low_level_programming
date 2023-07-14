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

	if (Digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, Digit);
	if (Digit  == 0)
		printf("Last digit of %d is %d and is 0\n", n, Digit);
	if (Digit < 6 && Digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Digit);
	return (0);
}
