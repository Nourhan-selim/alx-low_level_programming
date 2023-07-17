#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 48 ; i <= 55 ; i++)
	{
		for (j = 48 ; j <= 56; j++)
		{
			for (k = 48 ; k <= 56; k++)
			{
				if (i != j && i < j)
				{
					putchar(i);
					putchar(j);
					if (i != 56 && i != 57)
					{   putchar(',');
				            putchar(' ');
					}
				}
			}	
		
		}
	}	
	putchar('\n');
	return (0);
}
