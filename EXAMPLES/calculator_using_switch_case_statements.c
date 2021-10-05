#include<stdio.h>

int main(){
    char ch;
    int a,b;
    label1:
    printf("Enter the two number with operator:");
    scanf("%d %c %d", &a, &ch, &b);
    switch(ch){
        case '+':
            printf("The sum of a and b is:%d\n", a+b);
        break;
        case '-':
            printf("The subtraction of a and b is:%d\n", a-b);
        break;
        case '*':
            printf("The multiplication of a and b is:%d\n", a*b);
        break;
        case '/':
            printf("The division of a and b is:%d\n", a/b);
        break;

        case '%':
            printf("The remainder of a and b is:%d\n", a%b);
        break;
    }
    goto label1;
}