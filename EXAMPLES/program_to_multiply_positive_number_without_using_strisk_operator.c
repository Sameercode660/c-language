#include<stdio.h>

int main(){
    int a, b, result=0;
    printf("Enter a number:\n");
    scanf("%d %d", &a, &b);
    for(int i=1; i<=b; i++){
        result = result + a;
        
    }
    printf("The sum of %d x %d = %d\n", a, b, result);
    return 0;
}