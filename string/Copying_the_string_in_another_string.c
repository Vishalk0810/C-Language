#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char name1[50],name2[50];//string declare
    printf("Enter the string : ");
    gets(name1);//user prompt
    int length=strlen(name1);//length of string
    int i;//loop counter
    
    for(i=0; i<length; i++)
    {
        name2[i]=name1[i];//copying the string in another string
    }
    printf("Copied 1st string in 2nd string : ");
    puts(name2);
}