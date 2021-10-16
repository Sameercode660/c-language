#include<stdio.h>

int main(){
    int num,sum;
    printf("Enter a number:");
    scanf("%d", &num);
    sum=num;
    
    printf("Triad numbers are:");
    printf("%d\n", num);
    num*=2;
    printf("%d\n", num);
    num+=sum;
    printf("%d\n", num);


    return 0;
}