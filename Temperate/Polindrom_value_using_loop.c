#include<stdio.h>

main()
{
    
    int a,r,p=0,x;
    printf("Enter the value : ");
    scanf("%d",&a);
    x=a;
    
    while(a!=0)
    {
        r=a%10;
        p=r+(p*10);
        a=a/10;
    }

    if(p==x)
    {
        printf("The number is polindrom number");
    }
    else
    {
        printf("The number is not polindrom number");
    }
    
}