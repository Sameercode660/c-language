// here in the if statement assignment operator has used not equality operator 
// sometimes many people confused or sometimes makes the mistake to predict
// the correct output and main thing that any one-zero value is true for computer
// that'swhy if statement is true!
#include <stdio.h>

int main()
{
    int a = 9;
    if (a = 5)
    {
        printf("a is five\t");
    }
    else
    {
        printf("a is not five\t");
    }
    printf("The value of a is %d\n", a);
    return 0;
}