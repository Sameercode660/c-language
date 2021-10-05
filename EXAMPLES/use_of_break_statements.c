#include<stdio.h>

int main(){
    for(int i=0; i<6; i++){
        printf("sameer:\n");
        for(int j=0; j<5; j++){
            printf("how are you\n");
        if(j==1)
        {
            break;
        }
            
        }//inner loop is ended here!
        printf("loop is ending....\n");
    }
    return 0;
}