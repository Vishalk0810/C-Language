#include<stdio.h>
#include<conio.h>

void cube()
{
    int a;
    printf("Enter the value : ");
    scanf("%d",&a);
    a = a * a * a;
    printf("The cube of the value is : %d",a);
}

void main()
{
    cube();
}