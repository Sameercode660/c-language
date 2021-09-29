#include<stdio.h>

int main()
{
    int x, y, quo, rem;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    if(!y){ // This expression is also equivalent to this expression y==0;
        printf("Divide by zero error\n");
    }
    else{
        quo = x/y;
        rem = x%y;
        printf("Quotient = %d , remainder = %d\n", quo,rem);
    }
}