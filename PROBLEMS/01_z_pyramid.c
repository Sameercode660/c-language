#include<stdio.h>

int main(){
    int n, p;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            printf(" ");
        }
        p=(n-i)+1;
        for(int j=1; j<=2*(n-i)+1; j++){
            printf("%d", j);
            
        }
        printf("\n");
        
    }
    return 0;
}