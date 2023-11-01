#include<stdio.h>

main()
{
	
	int n;
	
	printf("Enter The Value :");
	scanf("%d",&n);
	
	if(n%5==0 && n%11==0)
	{
		printf("The Value Is Divisible by 5 and 11");
	}
	else
	{
		printf("The Value is Not Divisible by 5 and 11");
	}
}