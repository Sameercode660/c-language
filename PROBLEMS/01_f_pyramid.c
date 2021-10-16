#include<stdio.h>

int main(){
    for(int i=1; i<16; i++){
        printf("%d ", i);
        if (i==1 || i==3 || i==6 || i==10 || i==15 )
        {
            printf("\n");
        }
        
        
    }
    return 0;
}