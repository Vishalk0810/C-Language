#include<stdio.h>

main()
{
	int x,y,ans;
	
	printf("enter the value of x :");
	scanf("%d",&x);
	
	printf("enter the value of y :");
	scanf("%d",&y);
	
	ans=x*x*x - 3*x*x*y + 3*x*y*y + y*y*y;
	
	printf("the ans is :%d",ans);
}