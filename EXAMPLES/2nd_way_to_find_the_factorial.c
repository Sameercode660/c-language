// this program finds the factorial of a given number
// the mistake that i have done and is some syntax and some 
// condition expression mistake that i have done in this program 
// so it is very important to care about the expression and conditionl that
// has given to the loop!
#include<stdio.h>

int main(){
    int n, num;
    long fact = 1;
    printf("Enter a number:\n");
    scanf("%d", &n);

    num=n;
    if(n<0)
    printf("There is no factorial of negative number\n");
    else{
        while(n>1){
            fact*=n;
            n--;
        }
    }
    printf("The factorial of %d is %ld\n", num, fact);
    return 0;
} 