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
    
    c=(x*x*x)+(y*y*y)+(z*z*z);
    if(c==num)
    {
        printf("The Value is Armstrong Value");
    }
    else
    {
        printf("The Value is not Armstrong Value");
    }
}
