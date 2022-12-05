#include <stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("Enter the Arthimatic Operator +,-,*,/ % ");
	scanf("%s",&ch);
	switch(ch)
	{
	case'+':
		printf("ENter the number 1 = ");
		scanf("%d",&a);
		printf("ENter the number 2 = ");
		scanf("%d",&b);
		c=a+b;
		printf("Sum of %d and %d is %d\n",a,b,c);
		break;
	case'-':
		printf("ENter the number 1 = ");
		scanf("%d",&a);
		printf("ENter the number 2 = ");
		scanf("%d",&b);
		c=a-b;
		printf("Sum of %d and %d is %d\n",a,b,c);
		break;
	case'/':
		printf("ENter the number 1 = ");
		scanf("%d",&a);
		printf("ENter the number 2 = ");
		scanf("%d",&b);
		c=a/b;
		printf("Sum of %d and %d is %d\n",a,b,c);
		break;
	case'*':
		printf("ENter the number 1 = ");
		scanf("%d",&a);
		printf("ENter the number 2 = ");
		scanf("%d",&b);
		c=a*b;
		printf("Sum of %d and %d is %d\n",a,b,c);
		break;
	case'%':
		printf("ENter the number 1 = ");
		scanf("%d",&a);
		printf("ENter the number 2 = ");
		scanf("%d",&b);
		c=a%b;
		printf("Sum of %d and %d is %d\n",a,b,c);
		break;
	default:
		printf("Invalid Operator is Enterred ");
	}
}
	
