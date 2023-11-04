#include<stdio.h>

main()

{
	int a,b,c,d;
	printf("enter the values : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	(a>b)?(a>c)?(a>d)?printf("a is maximum"):printf("d is maximum"):(c>d)?printf("c is maximum"):printf("d is maximum"):(b>c)?(b>d)?printf("b is maximum"):printf("d is maximum"):(c>d)?printf("c is maximum"):printf("d is maximum");
	
}
