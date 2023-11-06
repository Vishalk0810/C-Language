#include<stdio.h>

void main()
{
	int a,b,c;
	printf("Enter The Value Of A :");
	scanf("%d",&a);
	
	printf("Enter The Value Of B :");
	scanf("%d",&b);
	
	printf("Enter The Value Of C :");
	scanf("%d",&c);
	
	//a,b,c
	if(a>b)
	{
		//a,c
		if(a>c)
		{
			printf("A Is Max");
		}
		else
		{
			printf("C Is Max");
		}
	}
	else
	{
		//b,c
		if(b>c)
		{
			printf("B Is Max");
		else
		{
			printf("C Is Max");
		}
	}
}