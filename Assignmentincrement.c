#include <stdio.h>
int main()
{
    int a=0,b=0,c;
    c=(a++>0)&&(b++>0);
    printf("a=%d b=%d c=%d \n",a,b,c);
}
//a=1 b=0 c=0 

