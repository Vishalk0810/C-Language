#include<stdio.h>

main()
{ 
	float c,f;
	
	printf("Enter The Temperature (in celsius) to convert it in Fahrenheit");
	scanf("%f",&c);
	
	f=(c*9/5)+32;
	printf("The Temperature (in fahrenheit):%.2f",f);
}
