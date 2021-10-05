#include<stdio.h>

int main(){
    int i, n, sum=0, term=1;
    printf("Enter a number of terms:\n");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        sum+=term;
        term = term + i;
    }
    printf("The sum of series upto %d terms is %d\n", n, sum);

    return 0;
}