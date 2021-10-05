#include<stdio.h>

int main(){
    long num;
    int dig, sum;
    printf("Enter a number:\n");
    scanf("%ld", &num);
    printf("%ld\t", num);
    do{
        sum=0;
        while(num!=0){
            dig = num%10;
            sum = sum+dig;
            num = num/10;
        }
        printf("%d\t", sum);
        num = sum;

    }while(num/10!=0);
    printf("\n");
    return 0;
}