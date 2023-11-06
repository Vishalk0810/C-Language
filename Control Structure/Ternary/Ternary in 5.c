#include<stdio.h>

main()
{
	int a,b,c,d,e;
	
	printf("Enter The Value :");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	(a>b)?(a>c)?(a>d)?(a>e)?printf("a is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(c>d)?(c>e)?printf("c is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(b>c)?(b>d)?(b>e)?printf("b is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(c>d)?(c>e)?printf("c is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum");
}