#include <stdio.h>
int main()
{
    int day;
    printf("Sunday-0 \n Monday-1 \n Tuesday-2 \n Wednesday-3 \n Thuresday-4 \n Friday-5 \n Saturday-6 \n");
    printf("Enter the day ");
    scanf("%d",&day);
    switch(day)
    {
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thurday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        default:
        printf("Entered invalid Day\n ");
    }
}
/*
Sunday-0 
 Monday-1 
 Tuesday-2 
 Wednesday-3 
 Thuresday-4 
 Friday-5 
 Saturday-6 
Enter the day 34
Entered invalid Day

Enter the day 4
Thuresday
*/
