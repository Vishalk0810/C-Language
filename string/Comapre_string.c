#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char name1[50],name2[50];//string declare
	printf("Enter the name : ");
	gets(name1);//user prompt
	printf("Enter the name : ");
	gets(name2);//user prompt
	int length=strlen(name1);
	int i,j,check;//loop counter i and j; check is for same string or not;
	
	for(i=0; i<length; i++)
	{
		check=0;
		for(j=0; j<length; j++)
		{   //compare string
			if(name1[i]==name2[j])
			{
				check=1;
			}
		}
	}
	if(check==1)
	{
		printf("Both string are same");
	}
	else
	{
		printf("Both string are different");
	}
}