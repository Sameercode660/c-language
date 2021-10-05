#include<stdio.h>

int main(){
    int n, rem, s, total, d;
    printf("Armstrong numbers are:\n");
    for(n=1; n<=1000; n++){
        s=n;
        total=0;
        while(s>0){
            rem = s%10; 
            s= s/10;
            d = rem*rem*rem;
            total = total + d;
        }
        if(s==total){
            printf("%d\n", total);
        }
    }
    return 0;
}