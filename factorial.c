#include <stdio.h>
int main()
{
int n;
int i,fact=1;
printf("Enter the number do you want to factorial ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d\n",fact);
}
/*
Enter the number do you want to factorial 5
120
*/
