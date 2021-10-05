#include<stdio.h>

int main(){
    int rem, num,d1, sum, total=0,d;
    printf("Enter  a number:\n");
    scanf("%d", &num);
    sum = num;
    for(int i=num; i>0; i/=10){
        rem = num%10;
        d = rem;
        d1 = d*d*d;
        total= d1 + total;

        
    }
    if(total==sum){
        printf("Armstrong number\n");
    }
    else{
        printf("Not a Armstrong number\n");
    }
    return 0;
}