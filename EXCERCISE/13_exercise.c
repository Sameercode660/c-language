/* Explanation--> Here in this program we are arranging many if-else in a proper 
meanwhile they do not arranged well they do not make any sense that'swhy here we are
using braces to make this program efficient with given statent */

#include<stdio.h>

int main(){
    // int a=10, b=20, c=30;
    int a,b,c;
    printf("Enter three number within space:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a==10)
    {
        if (b==20)
        {
            if (c==30)
            {
                printf(" a is 10, b is 20 and c is 30\n");
            }
            
        }
        else
        {
            printf("a is 10 but b is not 20\n");
        }
        
        
    }
    else{
        printf("a is not 10\n");
    }
    
    return 0;
}