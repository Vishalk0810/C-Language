#include<stdio.h>
#include<string.h>

struct Employee
{
	int	emp_id;
	int	emp_age;
	int	emp_experience;
	char emp_name[50];
	char emp_role[50];
	char emp_city[50];
	char emp_company_name[50];
	
};
main()
{
	char emp_name[50],emp_role[50],emp_city[50],emp_company_name[50];
	int n;
	printf("Enter how many employee : ");
	scanf("%d",&n);
	struct Employee employee[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the Id : ");
		scanf("%d",&employee[i].emp_id);
		
		printf("Enter the Name : ");
		scanf(" %[^\n]s",&employee[i].emp_name);
		strcpy(emp_name,emp_name);
		
		printf("Enter the Age : ");
		scanf("%d",&employee[i].emp_age);
		
		printf("Enter the Role : ");
		scanf(" %[^\n]s",&employee[i].emp_role);
		strcpy(emp_role,emp_role);
		
		printf("Enter the City : ");
		scanf(" %[^\n]s",&employee[i].emp_city);
		strcpy(emp_city,emp_city);
		
		printf("Enter the Experience : ");
		scanf("%d",&employee[i].emp_experience);
		
		printf("Enter the Company_name : ");
		scanf(" %[^\n]s",&employee[i].emp_company_name);
		strcpy(emp_company_name,emp_company_name);
		printf("\n");
		
		
	}
	for(i=0; i<n; i++)
	{
		printf("Id : %d\n",employee[i].emp_id);
		printf("Name : %s\n",employee[i].emp_name);
		printf("Age : %d\n",employee[i].emp_age);
		printf("Role : %s\n",employee[i].emp_role);
		printf("City : %s\n",employee[i].emp_city);
		printf("Experience : %d\n",employee[i].emp_experience);
		printf("Company_name : %s\n",employee[i].emp_company_name);
		printf("\n");
	}
}