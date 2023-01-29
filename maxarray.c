#include <stdio.h>
int main()
{
int a[7]={12,12,31,11,23,12,9};
int big=a[0];
for(int i=0;i<7;i++)
{
if(a[i]>big)
{
big=a[i];
}
}
printf("%d\n",big);
}
//31
