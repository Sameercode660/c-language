#include<stdio.h>

int main(){
    int choice, num;
    printf("1.\tpredecessor\n");
    printf("2.\tsuccessor\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);
    printf("Enter your number:\n");
    scanf("%d", &num);
    int store = num;
    if(choice==1){
        num=num-1;
        printf("The predecessore of %d is%d\n",store,num);
    }
    else{
        
        num+=1;
        printf("The successore of %d is%d\n",store,num);
    }
    return 0;
}