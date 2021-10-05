#include<stdio.h>

int main(){
    int n, fact=1, i;
    printf("Enter a number:\n");
    scanf("%d", &n);
    if(n<=0){
        printf("Enter a number that should be greater than zero\n");

    }
    else{
    while(n>1){
        fact*=n;
        n--;
    }}
    printf("The factorial is %d\n", fact);
    return 0;
}