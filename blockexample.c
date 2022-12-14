#include <stdio.h>
int main()
{
    int weekend;
    printf("Sunday-0 and Monday-1 ");
    scanf("%d",&weekend);
    if(weekend==0 || weekend==6)//if condition follows imidiate statement only
        printf("Enjoy1\n");
        printf("Weekend1\n");//its out of the if condition statement
     if(weekend==1 || weekend==6)//Conditional Statement Block
     {
        printf("Work\n");
        printf("Busy\n");
      }
}
/*
Sunday-0 and Monday-1 1
Weekend1
Work
Busy
*/
