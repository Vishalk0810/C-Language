#include<stdio.h>

main()
{
	int x,y,ans;
	
	printf("enter the value of x :");
	scanf("%d",&x);
	
	printf("enter the value of y :");
	scanf("%d",&y);
	
	ans=x*x - 2*x*y + y*y;
	
	printf("the ans is :%d",ans);
}