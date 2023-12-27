#include<stdio.h>
#include<conio.h>

void divisible()
{
    int a;
    printf("Enter the value : ");
    scanf("%d",&a);
    
    if(a%3==0 && a%5==0)
    {
        printf("The value divisible by both 3 and 5");
    }
    else if(a%3==0)
    {
        printf("The value is divisible by 3 only");
    }
    else if(a%5==0)
    {
        printf("The value is divisible by 5 only");
    }
    else
    {
        printf("The value is not divisible by 3 and 5");
    }
}

void main()
{
    divisible();
}