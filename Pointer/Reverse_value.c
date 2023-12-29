#include<stdio.h>

void main()
{
	int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int a[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of array a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	int *ptr=&a[n-1];
	printf("\n");
	for(i=n-1; i>=0; i--)
	{
		printf("%d\n",ptr);
		printf("%d\n",*ptr);
		ptr-=1;
	}
	
}