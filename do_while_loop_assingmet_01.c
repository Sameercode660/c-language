// in this program the do while loop is an infinite loop and it would 
// not be terminate because the value of i would be always 
// greater than zero because before the condition checking
// we are incrementing the variable i and after the 
// condition expression would be excuted that is why this do while loop 
// is an infinite loop!
#include<stdio.h>

int main(){
    int i=0;
    do{
        printf("sameer\n");
        i++;
    }while(i>0);
    return 0;
}