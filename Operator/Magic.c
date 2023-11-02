#include<stdio.h>

main()
{
    int num;
    printf("Enter The Value:");
    scanf("%d",&num);
    
    int x,y,z,a,b,c;
    x=num%10;
    a=num/10;
    y=a%10;
    b=a/10;
    z=b%10;
    
    if(x*y*z==x+y+z)
    {
        printf("It is magic number ");
    }
    else
    {
        printf("It is not magic number");
    }
}


