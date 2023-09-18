#include "main.h"

/**
 * swap_int - updates the value of the variable
 * a function that swaps the values of two integers
 * @a: pointer to the variable to update
 * @b: pointer to the variable to update
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
