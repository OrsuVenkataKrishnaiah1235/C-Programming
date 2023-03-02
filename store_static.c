#include <stdio.h>
//static default value zero
void count(int n){
static int d=1;
printf("%d",d);
printf("%d",n);
d++;
if(n>1)
{
count(n-1);
}
printf("%d",d);
}
int main()
{
count(3);
}
