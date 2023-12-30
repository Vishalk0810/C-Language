#include<stdio.h>
#include<conio.h>

void main()
{
	int n,a[7];//array declare and n for rotation position
	int i,j;//loop counters
	
	for(i=0;i<7;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);//user input of elements
	}
	printf("Enter The position from where you want to rotate the array : ");
	scanf("%d",&n);
	for(i=n; i<7; i++)
	{
		printf("%d ",a[i]);//process 
	}
	for(j=0; j<n; j++)
	{
		printf("%d ",a[j]);
	}
}