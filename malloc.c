#include <stdio.h>
int main()
{
    double *p;
    p=(double*)malloc(sizeof(double));   
    printf("Enter the NUmber ");
    scanf("%lf",p);
    printf("%lf \n",*p);
    free(p);
}
/*
Enter the NUmber 1223
1223.000000 
*/
