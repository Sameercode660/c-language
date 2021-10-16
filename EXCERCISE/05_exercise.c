// Explanation--> Output of this program is "C is depth "because here
// not operator is used in if statement and not logical operator converts
// the false into true and true into false because as we can see in if statement
// condition first condition is false but ! logical operator is used here and
// that'swhy it would be considered as true!.
#include<stdio.h>

int main(){
    int a=9, b=0, c=0;
    if (!a<10 && !b||c)
    {
        printf("C in depth\n");
    }
    else
    {
        printf("See in depth\n");
    }
    
    
    return 0;
}