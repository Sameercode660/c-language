#include<stdio.h>

int main(){
    int n=5,p,i;
    for(int i=0; i<=n; i++){
    for(int j=1; j<=n-i; j++){
        printf(" ");
    }
    p=i;
    for(int j=1; j<=i; j++){
        printf("%d",p++);
    }
    p=p-2;
    for(int j=1; j<=i-1; j++){
        printf("%d", p--);
    }
    printf("\n");
    }
    return 0;
}