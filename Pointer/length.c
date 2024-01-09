#include<stdio.h>
#include<string.h>

void main()
{
	char a[50];
	printf("Enter the string : ");
	gets(a);
	int length = strlen(a);
	int *ptr = &length;
	
	printf("%d",*ptr);
}