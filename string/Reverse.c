#include<stdio.h>
#include<conio.h>
#include<String.h>
 
void main()
{
	int n,i,rev=0;
	printf("Enter the size of the String :");
	scanf("%d",&n);
	
	char name[n];
	printf("Enter your name :");
	scanf("%s",&name);
	
	for(i=n-1; i>=0; i--)
	{
		printf("%c",name[i]);
	}
}