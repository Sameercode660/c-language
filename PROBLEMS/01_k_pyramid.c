#include<stdio.h>

int main(){
    int n;
    printf("How many lines you want to print:\n");
    scanf("%d", &n);
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            printf("%d ", i);
            
        }
        printf("\n");
        
    }
    return 0;
}