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
	char lalphabet = 'a';
	char ualphabet = 'A';

	while (lalphabet <= 'z')
		printf("%c %c\n", lalphabet, ualphabet);
	return (0);
}
