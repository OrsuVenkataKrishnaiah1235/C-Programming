#include <stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        int c=1;
        for(j=0;j<=i;j++)
        {
            printf("%d",c++);
        }
        printf("\n");
    }
}
    
