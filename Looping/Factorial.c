#include<stdio.h>

main()
{
	
	int i=1,n,m=1;
	printf("Enter The Value : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		m=m*i;
	
		i++;
	}
	printf("%d ",m);
	
}
