#include <stdio.h>
int main(){

     int day1, month1, year1, day2, month2, year2;
    
    printf("Enter a date (dd/mm/yy): ");
    scanf("%d/%d/%d", &day1, &month1, &year1);

    printf("Enter a date (dd/mm/yy): ");
    scanf("%d/%d/%d", &day2, &month2, &year2);


    if(year1 < year2)
        printf("%d/%d/%d comes earlier", day1, month1, year1);
    else if(year1 == year2){
        if(month1 < month2)
            printf("%d/%d/%d comes earlier", day1, month1, year1);
        else if(month1 == month2){
            if(day1 < day2)
                printf("%d/%d/%d comes earlier", day1, month1, year1);
            else
                printf("%d/%d/%d comes earlier", day2, month2, year2);
        }
        else
            printf("%d/%d/%d comes earlier", day2, month2, year2);
    }
    else
        printf("%d/%d/%d comes earlier", day2, month2, year2);

    return 0;
}