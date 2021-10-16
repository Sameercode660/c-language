/*Explanation--> Here we are writing this single statement using if-else 
statement that is" x += a<b ? (-x) : 100; "*/
#include <stdio.h>

int main()
{
    int x = 1, b = 3, a = 1;
    if (x += a < b)
    {
        x = -x;
    }
    else
    {
        x = 100;
    }

    printf("Value of x is %d\n", x);
    return 0;
}