 #include<stdio.h>
 
 int main(){
     int day, month, year, valid, nonValid;
      label1:
     printf("Enter date(dd/mm/yyyy):");
     scanf("%d-%d-%d", &day, &month, &year);
     if(day<32 && month<13 && year>1850 && year<2050 ){
         valid = 1;
     }//end if statement
     else{
         nonValid = 0;
     }// end of else statements
     if(valid==1){
         printf("Date is valid\n");
      }//end of if satatements
     else{
         printf("Date is not valid!\n");
     }//end of else statements
     goto label1;
      
     return 0;
 }