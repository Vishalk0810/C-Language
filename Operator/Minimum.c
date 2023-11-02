#include<stdio.h>

main()
{
	
	int a,b,c,d;
	
	printf("Enter The Values : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	printf("A is Mainimum Or Not : %d\n",a<b && a<c && a<d);
	printf("B is Mainimum Or Not : %d\n",b<a && b<c && b<d);
	printf("C is Mainimum Or Not : %d\n",c<a && c<b && c<d);
	printf("D is Mainimum Or Not : %d\n",d<a && d<b && d<c);
	
}
