#include <stdio.h>

int main()
{
    int n, p=0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        p = n;
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%d", p--);
        }
        
        p = p+2;
        for (int j = 1; j <= n - i; j++)
        {
            printf("%d", p++);
            
        }

        printf("\n");
    }
    return 0;
}