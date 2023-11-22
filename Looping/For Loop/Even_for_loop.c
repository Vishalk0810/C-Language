#include<stdio.h>

main()
{
	
	int i,n;
	printf("Enter The Value : ");
	scanf("%d",&n);
	
	for(i=2; i<=n; i+=2)
	{
		printf("%d ",i);
	}
	
}