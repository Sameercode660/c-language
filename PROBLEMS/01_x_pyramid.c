#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            printf(" ");
        }
        for(int j=1; j<=2*(n-i)+1; j++){
            printf("*");
            
        }
        printf("\n");
        
    }
    return 0;
}