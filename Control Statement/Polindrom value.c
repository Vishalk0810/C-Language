#include<stdio.h>

main()
{
	
	int a,b,c,x,y,z,num;
	
	printf("Enter The Value : ");
	scanf("%d",&num);
	
	a=num%10;
	x=num/10;
	b=x%10;
	y=x/10;
	c=y%10;
	z=b;
	printf("%d",a);
	printf("%d",b);
	printf("%d",c);
	
	printf("The Value Is Polindrom or not : %d",a==c && b==z);
	
}
