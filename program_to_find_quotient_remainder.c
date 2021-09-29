#include<stdio.h>

int main(){

    int x, y, quo, rem;
    printf("Enter two numbers:");
    scanf("%d %d", &x, &y);

    if(y){ // this means y!=0 is also equivalent to (y) 
        quo = x/y;
        rem = x%y;
        printf("Quotient = %d , Remainder = %d \n", quo, rem);

    }
    else{
        printf("Divide by zero error\n");
    }
}