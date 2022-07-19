#include<stdio.h> 

int main(){ 
    int month, year,day, date, i = 1, c;

    printf("Enter month: \n");
    scanf("%d", &month);
    printf("Enter year: \n");
    scanf("%d", &year);
    printf("Enter 1 - Monday   2 - Tuesday   3 - Wednesday   4 - Thursday   5 - Friday   6 - Saturday   7 - Sunday  : ");
    scanf("%d", &day);

    switch(month){
        case 2 : date = 28;
        break;
        case 4 :
        case 6 :
        case 9 :
        case 11 : date = 30;  
        break;
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 : date = 31;
        break;
        }
    
    printf("Mon\tTues\tWed\tThurs\tFri\tSat\tSun\n");

    while(i <= day){
        printf("\t");
        i += i;
    }

    c = day + 1;
    i = 1;

    while(i <= date){
        printf("%d\t", i);
        if(c > 7){
            c = 1;
            printf("\n");
        }
        i += 1;
        c += 1;
    }   

    return 0;
    }