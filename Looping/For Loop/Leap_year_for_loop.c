#include<stdio.h>

main()
{
	
	int i,n;
	printf("Leap Year (Between 2000 to 3000)\n\n");
	
	for(i=2000,n=3000; i<=n; i+=4)
	{
		printf("%d ",i);
	}
	
}