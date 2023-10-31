#include<stdio.h>

main()
{
	int x,y,z,ans;
	
	printf("Enter The Value of X : ");
	scanf("%d",&x);
	printf("Enter The Value of Y : ");
	scanf("%d",&y);
	printf("Enter The Value of Z : ");
	scanf("%d",&z);
	
	ans=x*x+y*y+z*z+2*x*y+2*y*z+2*x*z;
	
	printf("Your Ans Is : %d",ans);
}
