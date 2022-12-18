#include <stdio.h>
int main()
{
    int a=4,b=5;
    printf("Before Swaping a=%d b=%d \n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("After Swaping a=%d b=%d \n",a,b);
}
/*
Before Swaping a=4 b=5 
After Swaping a=5 b=4 
*/
