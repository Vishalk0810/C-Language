#include<stdio.h>

main()
{
	
	int a,b,c,d;
	
	printf("Enter The Values : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	printf("A is Maximum Or Not: %d\n",a>b && a>c && a>d);
	printf("B is Maximum Or Not : %d\n",b>a && b>c && b>d);
	printf("C is Maximum Or Not : %d\n",c>a && c>b && c>d);
	printf("D is Maximum Or Not: %d\n",d>a && d>b && d>c);
	
}
