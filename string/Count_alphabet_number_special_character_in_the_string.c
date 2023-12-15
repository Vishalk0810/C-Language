#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char name[50];//string declare
    printf("Enter the string : ");
    gets(name);//user prompt
    int length=strlen(name);//length of string
    int i;//loop counter
    int alpha,num,sp;//alphabet,number and special character count
    
    for(i=0; i<length; i++)
    {
        //alphabet count
        if(name[i]>=65 && name[i]<=90 || name[i]>=97 && name[i]<=122)
        {
            alpha++;
        }
        //number count
        else if(name[i]>=48 && name[i]<=57)
        {
            num++;
        }
        //special character count
        else if(name[i]>=33 && name[i]<=47 || name[i]>=58 && name[i]<=64)
        {
            sp++;
        }
    }
    printf("\nAlphabet in the string : %d \n\nNumber in the string : %d \n\nSpecial character in the string : %d",alpha,num,sp);
}