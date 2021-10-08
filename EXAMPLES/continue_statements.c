#include<stdio.h>

int main(){
    int i;
    for( i=0; i<=5; i++){
    if(i==3){
        continue;
    }
    printf("Number=%d\n",i);
    }
    return 0;
}