#include<stdio.h>

int main(){
    int day1 = 0, month1 = 0, year1 = 0, day2 = 0, month2 = 0, year2 = 0, day = 0, month = 0, year = 0;
   
    //statements to take first date as input!
    printf("Enter date(dd/mm/yyyy):");
    scanf("%d/%d/%d", &day1, &month1, &year1);
    
    // statements to take second date as input!
    printf("\nEnter date(dd/mm/yyyy:");
    scanf("%d/%d/%d", &day2, &month2, &year2);
   
    //statments to prints both dates!
    printf("\nYour first date is %d/%d/%d\n", day1, month1, year1);
    printf("Your second date is %d/%d/%d\n", day2, month2, year2);
   
    //statements to find the difference of two dates!
     day = (day2-day1);
     month = (month2-month1);
     year = (year2-year1);
    
    // statements to print the defference of two dates!
    printf("The difference is:%d/%d/%d\n", day, month, year);

    return 0;
}