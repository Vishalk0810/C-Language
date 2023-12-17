#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char a[50];
    printf("Enter the string : ");//string declare
    gets(a);//user prompt
    int len=strlen(a);//length of string
    int i,vowel=0,cons=0;// vowel count consonece count amd i for loop counter
	
    for(i=0; i<len; i++)
    {
        if(a[i] =='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        {
            vowel++;//vowel count
        }
        else if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        {
            cons++;//cons count
        }
    }
    printf("\nThe total number of vowel in the string is : %d\n",vowel);
    printf("The total number of consonant in the string is : %d",cons);
}
