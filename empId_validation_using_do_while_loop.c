#include<stdio.h>

int main(){
    int emp;
    do{
        printf("Enter employee ID(100-500):\n");
        scanf("%d", &emp);
    }while(emp<100 && emp>500);
    return 0;
}