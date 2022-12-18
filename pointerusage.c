#include <stdio.h>
int change(int a)
{
    a=a+5;
}
int changer(int *p)
{
    *p=*p+5;
}
int main()
{
    int a=5;
    int m=change(a);
    printf("%d\n",a);//5
    int k=changer(&a);//10
    printf("%d\n",a);
}
