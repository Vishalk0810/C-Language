#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char name[50];//string declare
    printf("Enter a string : ");
    gets(name);//user prompt
    int i;//i is for loop counter
    int length = strlen(name);

    for(i=0; i<length; i++)
    {   //removed space and blanks
        if(name[i]>=65 && name[i]<=90 || name[i]>=97 && name[i]<=122)
        {
            printf("%c",name[i]);
        }
    }
}

