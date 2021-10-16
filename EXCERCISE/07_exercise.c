// Explanation--> In if statement we have used not operator that indicated
// if a is equal to zero then condition would be evaluated otherwise condition would not be evaluated and if first statement of outer if is indicates that If a not equal zero this condition is false and that is the main reason statement first return 1 and in inner if condition is true because every non zero value is true for computer and after that statement one indicates "b is not equal to zero " here condition is right then this statement return zero that'swhy this statement stores 0 in variable b;

// 
#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    if (!a)
{
        b = !a;
        if(b)
            a = !b;
}
printf("%d, %d \n", a,b);
            return 0;
}