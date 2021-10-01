#include<stdio.h>

int main(){
    int num, sum=0;
    do{
        printf("Enter a number(enter 0 to stop):\n");
        scanf("%d", &num);
        sum = sum + num;
    }while(num!=0);
    printf("Sum is %d\n", sum);
    return 0;
}