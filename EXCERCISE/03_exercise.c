// explanantion--> In this program in statement number two used an equality operator
// but in first line a is assinned to the value of 10 so a is initialized to 10
// that is the main reason that if condition is not true! 
#include<stdio.h>

int main(){
    int a=10; 
    a==50;
    if (a==50)
    {
        printf("a is fifty\n");
    }
    else
    {
         printf("a is not fifty\n");
    }
    
    
    return 0;
}