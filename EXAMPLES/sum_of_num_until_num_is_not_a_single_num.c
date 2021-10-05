#include<stdio.h>

int main(){
    long num;
    int sum, dig;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("%d\n", num);
    do{
        sum = 0;
        while(num!=0){
            dig=num%10;
            sum+=dig;
            num/=10;
        }
        printf("%d\n", sum);
        num = sum;
    }while(num/10!=0);
    return 0;
}