#include <stdio.h>
int main()
{
int a=5,b=6,c=7,d=8;
printf("a=%d b=%d c=%d d=%d Actual Values \n",a,b,c,d);
a++;
printf("%d a++ Post increment \n",a);
++b;
printf("%d Pre Increment ++b \n",b);
--c;
printf("%d pre decrement --c\n",c);
d--;
printf("%d post decrement c--\n",d);
}
/*
a=5 b=6 c=7 d=8 Actual Values 
6 a++ Post increment 
7 Pre Increment ++b 
6 pre decrement --c
7 post decrement c--
*/
