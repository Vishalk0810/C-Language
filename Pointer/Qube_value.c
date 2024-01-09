#include<stdio.h>

main()
{
	int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int a[n][n];
	int i,j;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}