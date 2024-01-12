#include<stdio.h>
#include<string.h>

struct student
{
	int	stu_id;
	int	stu_age;
	int	stu_standard;
	char stu_name[50];
	char stu_course[50];
	char stu_city[50];
	char stu_school[50];
	
};
main()
{
	char stu_name[50],stu_course[50],stu_city[50],stu_school[50];
	struct student student[3];
	int i;
	
	for(i=0; i<3; i++)
	{
		printf("Enter the Id : ");
		scanf("%d",&student[i].stu_id);
		
		printf("Enter the Name : ");
		scanf("%s",&student[i].stu_name);
		strcpy(stu_name,stu_name);
		
		printf("Enter the Age : ");
		scanf("%d",&student[i].stu_age);
		
		printf("Enter the Course : ");
		scanf("%s",&student[i].stu_course);
		strcpy(stu_course,stu_course);
		
		printf("Enter the City : ");
		scanf("%s",&student[i].stu_city);
		strcpy(stu_city,stu_city);
		
		printf("Enter the Standard : ");
		scanf("%d",&student[i].stu_standard);
		
		printf("Enter the School : ");
		scanf("%s",&student[i].stu_school);
		strcpy(stu_school,stu_school);
		printf("\n");
	}
	for(i=0; i<3; i++)
	{
		printf("Id : %d\n",student[i].stu_id);
		printf("Name : %s\n",student[i].stu_name);
		printf("Age : %d\n",student[i].stu_age);
		printf("Course : %s\n",student[i].stu_course);
		printf("City : %s\n",student[i].stu_city);
		printf("Standard : %d\n",student[i].stu_standard);
		printf("School : %s\n",student[i].stu_school);
		printf("\n");
	}
}