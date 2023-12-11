#include<stdio.h>

main()
{
	int n,m,i,j,o;//n,m,o used for size of array and i,j used for loop counters
	printf("Enter the size of first array : ");
	scanf("%d",&n);
	printf("Enter the size of second array : ");
	scanf("%d",&m);
	int a[n],b[m];
	int c[o=n+m];

	printf("\n");
	//elements of the first array
	for(i=0; i<n; i++)
	{
		printf("Enter the elements of the first array : ");
		scanf("%d",&a[i]);
	}printf("\n");
	//elements of the second array
	for(j=0; j<m; j++)
	{
		printf("Enter the elements of the second array : ");
		scanf("%d",&b[j]);
	}
	//print the first array element
	printf("\nThe elements of the first array : ");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	} printf("\n");
	//print the second array element
	printf("The elements of second array : ");
	for(j=0; j<m; j++)
	{
		printf("%d ",b[j]);
	} printf("\n");
	//merging first array in third array
	for(i=0; i<n; i++)
	{
		c[i]=a[i];
	}
	j=0;
	//merging second array in third array
	for(i=n; i<o; i++)
	{
		c[i]=b[j];
		j++;
	}
	//merged in third array
	printf("\nThe elements merge in the third array : ");
	for(i=0; i<o; i++)
	{
		printf("%d ",c[i]);
	}

}
