#include<stdio.h>

int sum(int s)
{
	if(s==1)
	{
		return 1;
	}
	return s + sum(s-1);
}
void main()
{
	int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	printf("Sum of %d is : %d",n,sum(n));
}
