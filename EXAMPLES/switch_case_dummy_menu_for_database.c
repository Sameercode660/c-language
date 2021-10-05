  #include<stdio.h>
  
  int main(){
      int choice;
      
          printf("1.\tCreate database\n");
          printf("2.\tInsert new record\n");
          printf("3.\tModify a record\n");
          printf("4.\tDelete a record\n");
          printf("5.\tDisplay a record\n");
          printf("6.\tExit\n");
          printf("Enter your choice:");
          scanf("%d", &choice);
          switch(choice){
          case 1 :
          printf("Database created...\n\n");
          break;
          case 2 :
          printf("Record inserted....\n\n");
          break;
          case 3 :
          printf("Record modified....\n");
          break;
          case 4 :
          printf("Record deleted....\n");
          break;
          case 5 :
          printf("Records displayed....\n");
          break;
          case 6 :
          printf("Exit\n");
          default :
          printf("Wrong choice\n");
      }//End of switch

     
      return 0;
  }