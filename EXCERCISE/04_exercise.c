// Explanation--> here main thing is if statement in this if 
// statement there is not use of curly braces and if condition 
// is false and because of not used of curly braces here only one expression
// would be evaluated and after that second expression would be evaluated and that'swhy 
// b becomes 8!
#include<stdio.h>

int main(){
    int a=20, b=3;
    if (a<10)
    
        a=a-5;
        b=b+5;
    printf("%d\t%d\n", a,b);
    
    return 0;
}