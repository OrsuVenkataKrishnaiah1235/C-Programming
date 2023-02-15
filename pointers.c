#include <stdio.h>
int main()
{
    int a[5]={2,3,4,5,6};
    int *b=a+4;
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+(*b-i)-*(b-i);
    }
    printf("%d\n",sum);
    return 0;
}