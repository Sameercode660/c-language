//program that convert given binary number into decimal and gives result
#include<stdio.h>

int main(){
    int n, save, rem, d, j=1, dec=0;
    label1:
    printf("Enter the number in binary:\n");
    scanf("%d", &n);
    save = n;
    while(n>0){
        rem = n%10; // taking the last digit of the given number!
        d = rem*j;
        dec +=d;
        j *=2;
        n/=10; // skipping last digit of n!

    }
    printf("Binary number=%d, Decimal number=%d\n", save,dec);
    goto label1;
    return 0;
}
/* 1. statement to the loop is taking last digit of a number
and store in the rem variable and after that rem multiply with j variable and store it into d 
and after that in the third line statement d added with the dec and stored in dec and after that j is multiplied by
2 and the last statement of loop(n/=10) is a loop terminated statement */