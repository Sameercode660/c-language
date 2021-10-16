// explanation--> this program is inverse of exercise one
// where a non-zero value is given for a if statement and here
// a zero value is given for a if statements and that is the 
// main reason if statements is not evaluated and else statement is evaluated
// but the main thing that is something important to understand that is a
// is zero!
#include<stdio.h>

int main(){
    int a=0;
    if (a=0)
    {
        printf("a is zero\t");
    }
    else
    {
        printf(" a is not zero\t");
    }
    printf("The value of a is %d\n",a);
    
    
    return 0;
}