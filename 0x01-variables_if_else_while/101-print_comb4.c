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
		for (j = 49 ; j <= 56; j++)
		{
			for (k = 48 ; k <= 57; k++)
			{
				if (i != j && j != k  && i != k && i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 && i != 56 )
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
