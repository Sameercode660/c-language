/*Explanation--> Here we are combining multiple nested loops to each other using a 
single if statement that is if(i==3), if(j==k), if(l<m) then z=100; this multiple if statement
could be replaced by one single statement!*/
#include<stdio.h>

int main(){
    int i=3, j=2, k=2, l=1, m=2, a;
    if(i==3 && j==k && l<m)
        a=100;
    printf("The value of a is %d\n", a);
    return 0;
}