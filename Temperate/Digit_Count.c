#include<stdio.h>



main()
{
	int a,n=0;
	
	printf("Enter the value : ");
	scanf("%d",&a);
	
	while(a!=0)
	{
		 a=a/10;
		 n++;
	}
	   printf("Total Digits = %d",n);
}