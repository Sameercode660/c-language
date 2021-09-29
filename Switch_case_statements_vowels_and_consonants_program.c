#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    printf("Enter a character:");
    tolower(ch);
    scanf("%c", &ch);
    switch(ch){
        case 'a':
            printf("How are you and what are you doing in this time");
            break;
    }
    return 0;
    
}