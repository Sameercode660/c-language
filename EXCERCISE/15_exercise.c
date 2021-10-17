/* Explanation--> we cant write a single variable in switch case statement because the value of 
a variable may change in future */
#include <stdio.h>

int main()
{
    // int var=2, x=1, y=2;
    // int var, x, y;
    // printf("Enter three number within space:\n");
    // scanf("%d %d %d", &var, &x, &y);
    // switch (var)
    // {
    // case x:
    //     x++;
    //     break;
    // case y:
    //     y++;
    //     break;
    // }
    int a=1, b=1;
    switch(a){
        case b  :
         printf("%i\n", a);
    }

    return 0;
}