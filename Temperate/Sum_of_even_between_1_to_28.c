#include<stdio.h>

main()
{
	
	int i,sum=0;
	
	for(i=2; i<28; i+=2)
	{
		printf("%d ",i);
		sum=sum+i;
	}
	printf("Sum of even numbers between 1 to 28 is : %d",sum);
	
}