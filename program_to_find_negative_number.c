#include<stdio.h>

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if(num<0){
        printf("Entered number is negative\n ");

    }
    else{
        printf("Entered number is positive\n");
        
    }
}