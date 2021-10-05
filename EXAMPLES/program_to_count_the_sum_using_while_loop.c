#include<stdio.h>

int main(){
    int num, sum=0;
    printf("Enter a number( enter 0 to stop):\n");
    scanf("%d", &num);
    sum = sum + num;
    while(num!=0){
        printf("Enter a number(enter 0 to stop):\n");
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("The sum of all number %d\n", sum);
    return 0;
}