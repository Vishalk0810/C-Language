#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char name[50];//array declare
	printf("Enter your name : ");
	gets(name);//user prompt
	int frequency=1;//frequency to count
	int i,j,length=strlen(name);
	
	for (i=0; i<length; i++)
    {
        frequency=1;
        for (j=i+1; j<length; j++) 
        {
            if (name[i]==name[j]) 
            {
                frequency++;
                name[j]=-1; // Mark the element as visited
            }
        }
        if (name[i]!=-1) 
        {
            printf("Element %c occurs %d times\n",name[i],frequency);
        }
    }
	
}