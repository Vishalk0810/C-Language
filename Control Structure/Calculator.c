#include<stdio.h>



main()
{
	
	char op;
	float a,b;
	printf("Enter The Operator : ");
	scanf("%c",&op);
	printf("Enter The 1st value : ");
	scanf("%f",&a);
	printf("Enter The 2nd value : ");
	scanf("%f",&b);
	
	switch(op)
	{
	    case '+' : printf ("Addition = %.2f",a+b);
	    break;
	    case '-' : printf("Subtraction = %.2f",a-b);
	    break;
	    case '*' : printf("Multiplication = %.2f",a*b);
	    break;
	    case '/' : 
	    if(b!=0)
	    {
	    printf("Division = %.2f",a/b);
	    }
	    else
	    {
	        printf("Division not possible by zero");
	    }
	    break;
	    default: printf("Enter valid operator!");
	}
    
}