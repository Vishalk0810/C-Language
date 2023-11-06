#include<stdio.h>

main()
{
	int a,b,c,d;
	printf("Enter the Value :");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	 (a>b)?(a>c)?(a>d)?printf("a is Winner"): printf("d is Winner"):(c>d)?printf("c is Winner"):printf("d is the Winner"): (b>c)?(b>d)?printf("b is the Winner"): printf("d is the Winner")(c>d)?printf("c is the Winner"):printf("d is the Winner");
}