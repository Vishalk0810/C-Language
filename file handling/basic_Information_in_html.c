#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *htmlfile;
	htmlfile = fopen("information.html","w");
	
	char name[50],city[50],gender[10];
	int age;
	printf("Enter your Name : ");
	scanf(" %[^\n]s",name);
	
	printf("Enter your Age : ");
	scanf("%d",&age);
	
	printf("Enter your Gender : ");
	scanf(" %[^\n]s",gender);
	
	printf("Enter your City : ");
	scanf(" %[^\n]s",city);
	printf("\n");
	
	printf("Your Name is : %s\n",name);
	printf("Your Age is : %d\n",age);
	printf("Your Gender is : %s\n",gender);
	printf("Your City is : %s\n",city);
	
	fprintf(htmlfile,"<html>");
	fprintf(htmlfile,"<head>");
	fprintf(htmlfile,"<title>");
	fprintf(htmlfile,"MY INFORMATION");
	fprintf(htmlfile,"</title>");
	fprintf(htmlfile,"</head>");
	fprintf(htmlfile,"<body>");
	fprintf(htmlfile,"<h1>Name : %s<h1>\n",name);
	fprintf(htmlfile,"<h1>Age : %d<h1>\n",age);
	fprintf(htmlfile,"<h1>Gender : %s<h1>\n",gender);
	fprintf(htmlfile,"<h1>City : %s<h1>\n",city);
	fprintf(htmlfile,"<body>");
	fprintf(htmlfile,"</html>");
}