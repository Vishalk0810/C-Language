#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Student
{
	char name[50];	
	int rollno,chem_marks,maths_marks,phy_marks;
};

void main()
{
	char a[50];
	struct Student student[5];
	int i,total;
	float per;
	
	for(i=0; i<5; i++)
	{
	    //student details user input
		printf("Student %d\n",i+1);
		printf("Enter your roll number : ");
		scanf("%d",&student[i].rollno);
		
		printf("Enter your Name : ");
		scanf(" %[^\n]student",&a);
		strcpy(student[i].name,a);
		
		printf("Enter your chemistry marks : ");
		scanf("%d",&student[i].chem_marks);
		
		printf("Enter your maths marks : ");
		scanf("%d",&student[i].maths_marks);
		
		printf("Enter your physics marks : ");
		scanf("%d",&student[i].phy_marks);
		printf("\n");
	}
	printf("\n");
	for(i=0; i<5; i++)
	{
	    //print student details
		printf(" %s(%d)\n",student[i].name,student[i].rollno);
		printf("Chemistry : %d\n",student[i].chem_marks);
		printf("Maths : %d\n",student[i].maths_marks);
		printf("Physics : %d\n",student[i].phy_marks);
		total = student[i].chem_marks + student[i].maths_marks + student[i].phy_marks;
		printf("Total : %d/300\n",total);
		per = (total * 100)/300;
		printf("Percentage : %.2f\n",per);
		printf("\n");
	}
}