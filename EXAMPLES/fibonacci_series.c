

// this program is first have initialized x=0, y=1, and first i have printed 
// the value of y because first we need to print the 1 and after that we have gone
// for loop and after that loop initialized and after that var i initialized by 1 and the
// the condition evaluated that i<n and after that we take the value of 
/*x and y into z and we have printed the value of z and after that we assign
the value of y in to var x and after that we have stored the value
z in var y after that loop will execute again*/
#include<stdio.h>

int main(){
    long x,y,z;
    int i,n;
    x=0;
    y=1;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("%ld,", y);
    for(int i=1; i<n; i++){
        z=x+y;
        printf("%ld,",z);
        x=y;
        y=z;
        
    }
    printf("\n");
    return 0;
}