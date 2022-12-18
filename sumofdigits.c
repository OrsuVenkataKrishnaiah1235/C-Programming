#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the NUmber ");
    scanf("%d",&n);
    int sum=0;
    while(n>0)
    {
        int k=n%10;
        sum+=k;
        n/=10;
     }
     printf("%d\n",sum);
     
}
/*
Enter the NUmber 987
24
*/
