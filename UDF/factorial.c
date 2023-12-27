#include<stdio.h>

int factorial(int f)
{
	if(f==1)
	{
		return 1;
	}
	return f * factorial(f-1);
}
void main()
{
	int n;
	printf("Enter the value which you have to factorise : ");
	scanf("%d",&n);
	printf("Factorial of %d is : %d",n,factorial(n));
}
