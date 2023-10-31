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
	
	ans=x*x*x+y*y*y+z*z*z+3*x*2*y+3*x*y*2+3*y*2*z+3*y*z*2+3*x*z*2+3*x*2*z+6*x*y*z;
	
	printf("Your Ans Is : %d",ans);
}
