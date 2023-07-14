#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int i = 48;

	do {
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	} while (i <= 57)
	putchar('\n');
	return (0);
}
