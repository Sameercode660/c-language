#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    switch(ch){
        case 'a':
            printf("Entered character is:%c\n", ch);
        break;
    }
}