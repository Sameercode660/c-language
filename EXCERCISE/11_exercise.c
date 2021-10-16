/*Explanation--> Here we are replacing many if by else-if ladder !
if(x==0)
    y++;
if(x>0)
    y--;
if(x<0)
    y+=2;
all the upper statements are replaced by else-if ladder! */
#include <stdio.h>

int main()
{
    int x = 2, y = 1;
    if (x == 0)
    {
        y++;
    }
    else if(x>0)
    {
        y--;
    }
    else if (x<0)
    {
        y += 2;
    }
    printf("The value of y is %d\n", y);
    

    return 0;
}