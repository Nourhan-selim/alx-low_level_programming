#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main()
{   
	int i ,j;
    for (i = 48 ;i <= 56 ;i++)
    {   for (j=48 ;j <= 57; j++)
        {   if (i != j && i < j)
            {
                putchar(i);
                putchar(j);
                if(i != 56 && i != 57)
                {   putchar(',');
                    putchar(' ');
                }
            }

        }
    }
    return 0;
}
