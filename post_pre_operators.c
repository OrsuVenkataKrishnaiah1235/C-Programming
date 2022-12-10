#include <stdio.h>
int main()
{
int a=5,b=6,c=7,d=8;
printf("a=%d b=%d c=%d d=%d Actual Values",a,b,c,d);
a++;
printf("%d a++ Post increment",a);
++b;
printf("%d Pre Increment ++b",b);
--c;
printf("%d pre decrement --c",c);
d--;
printf("%d post decrement c--",d);
}
