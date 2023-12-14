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
    int palindrom = 1;//to check palindrom value

    for (i=0; i<length/2; i++)
    {
        if (name[i] != name[length - 1 - i])
        {
            palindrom = 0;  // Not a palindrom value
            break;
        }
    }

    if (palindrom==1)
    {
        printf("The string is a palindrom");
    } 
    else
    {
        printf("The string is not a palindrom");
    }
}