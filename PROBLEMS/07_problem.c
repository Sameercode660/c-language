#include<stdio.h>

int main(){
    int x,y,a,b,product, hcf;
    printf("Enter two numbers:\n");
    scanf("%d%d", &x, &y);
    a=x; b=y;
    product=a*b;
    while (a!=b)
    {
        if (a<b)
        {
            a=a+x;
        }else{
            b=b+y;
        }
        
    }
    printf("LCM of %d and %d is %d\n", x,y,a);
    printf("HCF of %d and %d is ", x,y);
    hcf=product/a;
    printf("%d\n", hcf);
    
    return 0;
}