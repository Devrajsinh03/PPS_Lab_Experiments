#include <stdio.h>

int main()
{
    int n = 5;
    int i, j;
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j > n - i - 2)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}