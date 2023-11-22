#include<stdio.h>

main()
{
	
	int i,n,m;
	printf("Enter The Value : ");
	scanf("%d",&n);
	
	for(i=1,m=1; i<=n; i++)
	{
		m=m*i;
	}
	printf("%d ",m);
	
}