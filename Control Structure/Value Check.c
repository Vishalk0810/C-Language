#include<stdio.h>

main()
{
	int a;
	printf("Enter The Value : ");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("The Value Is Positive...");
	}
	else
	{
		if(a==0)
		{
			printf("The Value Is Neutral...");
		}
		else
		{
			printf("The Value Is Negative...");
		}
	}
}
