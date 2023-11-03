#include<stdio.h>

main()
{
	int age;
	printf("Enter Your Age : ");
	scanf("%d",&age);
	
	if(age>0)
	{
		if(age>100)
		{
			printf("You Enter The Age More Then 100...");
		}
		else
		{
			printf("You Entered Valid Age...");
		}
	}
	else
	{
		if(age==0)
		{
			printf("You Entered Neutral Age...");
		}
		else
		{
			printf("You Entered Invalid Age...");
		}
	}
}
