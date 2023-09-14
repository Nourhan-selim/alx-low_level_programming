#include "main.h"
#include <stdio.h>

/**
 * main - check if c is uppercase or not
 *
 * Return: 1 if uppercase and 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (0);
}
