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
				if (i != j && i < j && j < k)
				{
					putchar(i);
					putchar(j);
					if (i != 55 && j != 56)
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
