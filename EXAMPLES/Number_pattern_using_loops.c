#include<stdio.h>

int main(){
    for(int i=0; i<5; i++){
        switch(i){
            case 0:
                printf("");
                for(int j=0; j<5; j++){
                    printf("%d", 5);
                }
                printf("\n");
            break;
            case 1:
                printf(" ");
                for(int j=0; j<4; j++){
                    printf("%d", 4);
                }
                printf("\n");
            break;
            case 2:
                printf("  ");
                for(int j=0; j<3; j++){
                    printf("%d", 3);
                }
                printf("\n");
            break;
            case 3:
                printf("   ");
                for(int j=0; j<2; j++){
                    printf("%d", 2);
                }
                printf("\n");
            break;
            case 4:
                printf("    ");
                for(int j=0; j<1; j++){
                    printf("%d", 1);
                }
                printf("\n");
            break;
        }
    }
}