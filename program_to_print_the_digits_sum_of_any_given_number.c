//program to print the sum of any given number specially their digits sum eg- 1824 sum of thier digit is 1824
#include<stdio.h>

int main(){
    int n, sum=0, rem;
    printf("Enter a number:\n");
    scanf("%d", &n);
     
    while(n>0)
    {
        rem = n%10;
        sum+= rem;
        n/=10;
    }
    printf("The digit sum of %d\n", sum);
    return 0;
}