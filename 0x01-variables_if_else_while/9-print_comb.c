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
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	} while (i <= 57);

	putchar('\n');
	return (0);
}
