#include <stdio.h>
int main()
{
int sum=0,n,input;
printf("Enter how many numbers do you want");
scanf("%d",&n);
int a[n];
for(int i=1;i<=n;i++)
{
	printf("Enter the NUmber %d ",i);
	scanf("%d",&input);
	a[i]=input;
	sum=sum+a[i];
}
double avg;
avg=sum/n;
printf("Avg of NUmbers are %f \n",avg);
}
