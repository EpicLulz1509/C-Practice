#include <stdio.h>
int main(){
    
     int day, month, year;
    
    printf("Enter a date (dd/mm/yy): ");
    scanf("%d/%d/%d", &day, &month, &year);


    if(month > 12 || month < 1)
        printf("Month Not Valid \n");
    if(day > 31 || month < 1)
        printf("Day Not Valid \n");
    if(year % 4 == 0 && year % 100 == 0 && year % 100 == 0)
        printf("Leap year \n");

    return 0;
}