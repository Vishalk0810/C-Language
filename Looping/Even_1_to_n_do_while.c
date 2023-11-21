#include<stdio.h>

main()
{
	
	int n,i=2;
	printf("Enter The Value : ");
	scanf("%d",&n);

	do
	{
		printf("%d ",i);
		i+=2;
	}while(i<=n);
	
}