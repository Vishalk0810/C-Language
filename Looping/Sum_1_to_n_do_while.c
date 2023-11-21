#include<stdio.h>

main()
{
	
	int i=1,n,sum=0;
	printf("Enter The Value : ");
	scanf("%d",&n);
	
	do
	{
		sum=sum+i;
	
		i++;
	}while(i<=n);
	
	printf("%d ",sum);
	
}