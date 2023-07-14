#include <stdio.h>

/**
 * main - main function
 * Description:printing Hexadecimal
 * Return: 0
 */

int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f' ; y++)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
