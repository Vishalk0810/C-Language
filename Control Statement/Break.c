#include<stdio.h>

main()
{
	
	int i,n;
	printf("Enter The Limit : ");
	scanf("%d",&n);
	
	for(i=1; i<=10; i++)
	{
		printf("%d ",i);
		if(i==n)
		{
			break;
		}	
	}
	
}