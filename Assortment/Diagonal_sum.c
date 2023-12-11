#include<stdio.h>

main()
{
	int n,i,j;//n is size of array and i,j for loop counters
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n][n];
	int sum=0;//sum is for storing diagonal sum of the array
	
	printf("\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("a[%d][%d] - ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		sum=sum+a[i][i];
	}
	printf("\nSum of the diagonal : %d",sum);
	
}