//this program find the digit product of a given number!
#include<stdio.h>

int main(){
    int n, sum=1, rem;
    label:
    printf("Enter a number:\n");
    scanf("%d", &n);
    if(n==0){
        printf("The product is %d\n", n);
    }
     else{
    while(n>0){
        rem = n%10;// for taking the last digit of this number or n!
        sum*=rem; // this state is equavalent to n = n/10
        n/=10; // n= n/10

    }
    printf("The product %d\n", sum);
     }
    goto label;
    return 0;
}