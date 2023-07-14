#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lalphabet = 'z';

	while (lalphabet >= 'a')
	{
		putchar (lalphabet);
		lalphabet--;
	}
	putchar (\n);
	return (0);
}
