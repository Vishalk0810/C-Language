#include<stdio.h>
#include<conio.h>
#include<string.h>
 
void main()
{
	int n,i,length=0;
	printf("Enter the size of the String :");
	scanf("%d",&n);
	
	char name[n];
	printf("Enter your name :");
	scanf("%s",&name);
	
	for(i=0; i<name[i]; i++)
	{
		length++;
	}
	printf("%d",length);
}
