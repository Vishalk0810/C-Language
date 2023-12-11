#include<stdio.h>

main()
{
	int n,i,j;//n is for size of array and i,j for loop counters
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter the elements of the array : ");
		scanf("%d",&a[i]);
	}
	
	int target;
	printf("\nEnter the target value : ");
	scanf("%d",&target);
	//making pair of target value
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i]+a[j]==target)
			{
				printf("(%d , %d)",a[i],a[j]);
			}
		}
	}
}