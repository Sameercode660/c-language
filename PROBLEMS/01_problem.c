//program to chech the entered date is valid or not

#include<stdio.h>

int main(){
    int d,m,y;
    int flag, isleap;
    label:
    printf("Enter date(dd/mm/yyyy):\n");
    scanf("%d/%d/%d", &d,&m,&y);
    if(y%100!=0 && y%4==0 ||y%400==0){
        isleap = 1;
    }
    if(y<1850 || y>2050 || m<1 || m>12 || d<1 || d<31){
        flag = 0;
    }
    else if(m==2){
        if(d==30 || d==31 || (d==29 && !isleap)){
            flag = 0;
        }
    }
    else if(m==4 || m==6 || m==9 || m==11){
        if(d==31){
            flag = 0;
        }
    }
    if(flag==0){
        printf("Entered date is not a valid\n");
    }
    else{
        printf("Entered date is valid!\n");
    }
    goto label;
    return 0;
}