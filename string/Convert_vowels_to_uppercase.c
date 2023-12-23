#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char a[50];
    printf("Enter the string : ");
    gets(a);
    int len=strlen(a);
    int i;
    
    for(i=0; i<len; i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            a[i] = a[i] - 32;
        }
    }
    puts(a);
}