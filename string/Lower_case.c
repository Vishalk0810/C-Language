#include<stdio.h>
#include<conio.h>
#include<String.h>
 
void main()
{
	int n,i;
	printf("Enter the size of the String :");
	scanf("%d",&n);
	
	char name[n];
	printf("Enter your name :");
	scanf("%s",&name);
	
	for(i=0; i<n; i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			name[i]=name[i]+32;
		}
	}
	printf("%s",name);
}