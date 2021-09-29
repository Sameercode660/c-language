#include<stdio.h>

int main(){
    int a, b;
    label:
    printf("Enter two number:");
    scanf("%d %d", &a, &b);

    if(a>b){
        printf("Bigger is %d\n", a);
    }
    else{
        printf("Bigger is %d\n", b);
    }
    goto label;
}