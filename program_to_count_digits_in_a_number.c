// this program is counting the digit of a given number
// and print the total number of digit of a given number
// and the first line of do while is termination condition
// and second line is incrementing the variable count
// and after that the control would be check the condition
// and the thing is that the loop would be execute once after that 
// when the condition will false because the condition of a 
// do while loop is check at the last of the loop!
#include<stdio.h>

int main(){
    int n, count=0, rem;
    printf("Enter a number:\n");
    scanf("%d", &n);
    do{
        n/=10;
        count++;
    }while(n>0);
    printf("Number of digits=%d\n", count);
    return 0;
}
 