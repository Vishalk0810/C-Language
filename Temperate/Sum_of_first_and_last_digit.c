#include<stdio.h>

main()
{
    
	int a,b=0,c,d;
	
	printf("Enter the value : ");
	scanf("%d",&a);
	d=a%10;
	
	while(a>=10)
	{
		a=a/10;
		c=a;
        b=c+d;
	}
     
	 printf("Sum of first and last digit = %d",b);
	 
}