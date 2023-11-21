#include<stdio.h>

main()
{
	
	int i=1,n,m=1;
	printf("Enter The Value : ");
	scanf("%d",&n);
	
	do
	{
		m=m*i;
	
		i++;
	} while(i<=n);
	
	printf("%d ",m);
	
}