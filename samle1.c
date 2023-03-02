#include <stdio.h>
int main()
{
int *j;
int *fun();
j=fun();
printf("%d",*j);
}
int *fun()
{
int k=35;
return(&k);
}
//35
