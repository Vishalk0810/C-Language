#include<stdio.h>
#include<string.h>

void main()
{
	char name[50];
	printf("Enter your full name : ");
	gets(name);
	
	int i,length=strlen(name);
	if(name[0]>=97 && name[0]<=122)
	{
		name[0] = name[0] - 32;
	}
	for(i=1; i<=length; i++)
	{
		if(name[i-1]==' ')
		{
			if(name[i]>=97 && name[i]<=122)
			{
				name[i] = name[i] -32;
			}
		}
		else if(name[i]>=65 && name[i]<=90)
		{
			name[i] = name[i] + 32;
		}
		else if(name[i]==' ')
		{
			if(name[i]>=97 && name[i]<=122)
			{
				name[i+1] = name[i+1] = -32;
			}
		}
	}
	printf("Title was converted : ");
	puts(name);
	
}