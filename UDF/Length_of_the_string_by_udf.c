#include<stdio.h>
#include<conio.h>
#include<string.h>

int stringLength(char str[]) 
{
    int length=0;

    while (str[length]!='\0')
    {
        length++;
    }
    return length;
}

void main() 
{
    char s[50];

    printf("Enter the string : ");
    gets(s);

    int length=stringLength(s);

    printf("Length of the string is : %d",length);
}
