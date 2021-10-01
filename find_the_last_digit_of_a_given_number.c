#include<stdio.h>

int main(){
    int num, lastdigit;
    printf("Enter a number(Whether negative or positive):\n");
    scanf("%d", &num);
    lastdigit = num%10;
    printf("\n The last number of %d is %d\n", num, lastdigit);
    
    return 0;
}