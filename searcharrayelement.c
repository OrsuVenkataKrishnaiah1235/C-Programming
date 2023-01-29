#include <stdio.h>
int main()
{
    int a[5];
    printf("Enter the 5 elements ");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    int n;
    printf("Enter the element to search ");
    scanf("%d",&n);
    for(int j=0;j<6;j++)
    {
    if(a[j]==n)
    {
    printf("%d Founded the element at the index of %d",n,j);
    break;
    }
    }
} 
/*
Enter the 5 elements 3
4
1
2
5
7
Enter the element to search 5
5 Founded the element at the index of 4
*/
