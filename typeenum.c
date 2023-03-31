//typedef and enum
#include <stdio.h>
int main()
{
typedef enum numbers{1,2,3,4,5,6,7};

numbers num=5;

switch(num)
{
case 1:
    printf("1");
    break;
case 2:
    printf("2");
    break;
case 3:
    printf("3");
    break;
case 4:
    printf("4");
    break;
case 5:
    printf("5");
    break;
case 6:
    printf("6");
    break;
case 7:
    printf("7");
    break;
default:
    printf("Not Mentioned above 1-7 numbers");

}}
