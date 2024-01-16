#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *htmlfile;
	htmlfile = fopen("index.html","w");
	
	char name[50],city[50],gender[10];
	int age;
	printf("Enter your name : ");
	scanf(" %[^\n]",name);
	
	printf("Enter your age : ");
	scanf("%d",&age);
	
	printf("Enter your gender : ");
	scanf(" %[^\n]",gender);
	
	printf("Enter your city : ");
	scanf(" %[^\n]",city);
	
	fprintf(htmlfile,"<html>");
	fprintf(htmlfile,"<head>");
	fprintf(htmlfile,"<title>");
	fprintf(htmlfile,"My Information");
	fprintf(htmlfile,"</title>");
	fprintf(htmlfile,"</head>");
	fprintf(htmlfile,"<body>");
	fprintf(htmlfile,"Name : %s\n",name);
	fprintf(htmlfile,"Age : %d\n",age);
	fprintf(htmlfile,"Gender : %s\n",gender);
	fprintf(htmlfile,"City : %s\n",city);
	fprintf(htmlfile,"<body>");
	fprintf(htmlfile,"</html>");
}