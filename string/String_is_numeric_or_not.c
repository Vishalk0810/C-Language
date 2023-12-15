#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char name[50];//string declare
    printf("Enter the string : ");
    gets(name);//user prompt
    int length=strlen(name);
    int i,num=0;//i is loop counter
    
    for(i=0; i<length; i++)
    {
        if(name[i]>=48 && name[i]<=57)
        {
            num=1;//numeric
        }
    }
    if(num==1)
    {
        printf("The string is numeric");
    }
    else
    {
        printf("The string is not numeric");
    }
}