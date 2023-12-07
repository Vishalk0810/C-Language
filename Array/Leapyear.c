#include<stdio.h>

main()
{
	int start,end;//starting year and ending year
	printf("Enter the starting year : ");
	scanf("%d",&start);
	printf("Enter the ending year : ");
	scanf("%d",&end);
	
	int length = end-start;//finding the difference between the years
	int leap = length/4+1;//finding how much leap year comes between the years input by the user
	int leapyear[leap];//array declare with size
	int i,x=0;//i is for loop counter and x to store the value
	
	for(i=start; i<=end; i++)
	{
	   if(i%4==0)
	   {
	   	  leapyear[x]=i;
	   	  x++;
	   }	
	}
	//leapyear finding process
	printf("\nLeap Year between %d - %d are : \n",start,end);
	for(i=0; i<x; i++)
	{
		printf("%d ",leapyear[i]);
	}
}