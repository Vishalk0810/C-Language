#include<stdio.h>

main()
{
	int x;
	printf("Enter The Base Salary");
	scanf("%d",&x);
	
	float HRA=(x*10)/100;
	float DA=(x*5)/100;
	float TA=(x*8)/100;
	float gs=x+HRA+DA+TA;
	
	printf("The Final Salary is:%.2f",gs); 
}
