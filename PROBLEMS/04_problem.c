#include<stdio.h>

int main(){
    int notes, num,choice;
    // to take the amount from user
    printf("Enter total amount:");
    scanf("%d", &num);
    // to know the choice of user
    printf("Enter the value of notes from which you want to begin:\n");
    scanf("%d", &choice);
    //switch case statements
    switch(choice){
    case 100 :
        notes = num/100;
        printf("Number of 100 notes in %d\n", notes);
        num=num%100;
    case 50 :
        notes = num/50;
        printf("Number of 50 notes in %d\n", notes);
        num=num%50;
    case 20 :
        notes = num/20;
        printf("Number of 20 notes in %d\n", notes);
        num=num%20;
    case 10 :
        notes = num/10;
        printf("Number of 10 notes in %d\n", notes);
        num=num%10;
    case 5 :
        notes = num/5;
        printf("Number of5 notes in %d\n", notes);
        num=num%5;
    case 2 :
        notes = num/2;
        printf("Number of 2 notes in %d\n", notes);
        num=num%2;
    case 1 :
        notes = num/1;
        printf("Number of 1 notes in %d\n", notes);
        num=num%1;
    
 
    }
    return 0;
}