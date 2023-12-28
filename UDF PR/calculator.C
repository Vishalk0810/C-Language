#include<stdio.h>
#include<conio.h>

float add(float x,float y)
{
    return x + y;
}
float subtract(float x, float y)
{
    return x - y;
}
float multiply(float x, float y)
{
    return x * y;
}
float divide(float x, float y)
{
    return x / y;
}

main() 
{
    int choice;
    float num1, num2;

    printf("Welcome to the calculator!\n");

    while (1)
	 {
        printf("Please select an operation:\n");
        printf("Enter 1 for Add\n");
        printf("Enter 2 for Subtract\n");
        printf("Enter 3 for Multiply\n");
        printf("Enter 4 for Divide\n");
        printf("Enter 0 for Exit\n\n");

        printf("Enter the operation : ");
        scanf(" %d", &choice);

        if (choice == 0) 
        {
            printf("Thank you for using the calculator!\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%f", &num1);

        printf("Enter the second number: ");
        scanf("%f", &num2);
        printf("\n");

        switch (choice) 
        {
            case 1:
                printf("Result: %.2f\n\n",add(num1, num2));
                break;
            case 2:
                printf("Result: %.2f\n\n",subtract(num1, num2));
                break;
            case 3:
                printf("Result: %.2f\n\n",multiply(num1, num2));
                break;
            case 4:
                if (num2 != 0) 
                {
                    printf("Result: %.2f\n\n",divide(num1, num2));
                } else 
                {
                    printf("Cannot divide by zero\n\n");
                }
                break;
            default:
                printf("Invalid input. Please try again.\n\n");
        }
    }
}

