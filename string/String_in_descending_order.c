#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char a[50],temp;//string declare and temp for storing value
    printf("Enter the string : ");
    gets(a);//user input
    int i,j;//loop counter
    int l=strlen(a);//length of string
    
    //sorting process
    for(i=1;i<l;i++)
    {
       for(j=0;j<l-i;j++)
       {
	      if(a[j]<a[j+1])
       	  {
	         temp=a[j];
	         a[j] = a[j+1];
	         a[j+1]=temp;
	      }
       }
    }
   printf("\nString in descending order : %s",a);
}
  