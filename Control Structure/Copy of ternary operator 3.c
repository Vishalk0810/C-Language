#include<stdio.h>

main()

{
	int a,b,c;
	printf("enter the values : ");
	scanf("%d%d%d",&a,&b,&c);
	
	(a>b)?(a>c)?printf("a is maximum"):printf("a is maximum"):(b>c)?printf("b is maximum"):printf("c is maximum");
}
