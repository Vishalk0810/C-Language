#include<stdio.h>

main() 
{
	
    int a = 5;
    int b = 10;
    int c = 15;

    // Logical AND operator
    if(a > 0 && b > 0 && c > 0) 
	{
        printf("All numbers are greater than 0\n");
    }
    
    // Logical OR operator
    if(a > 0 || b > 0 || c > 0) 
	{
        printf("At least one number is greater than 0\n");
    }

    // Logical NOT operator
    if(!(a < 0)) 
	{
        printf("A is not greater than 0\n");
    }

}