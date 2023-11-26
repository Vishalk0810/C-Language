#include<stdio.h>

main()
{
    
    int a,b;

    printf("Enter the value : ");
    scanf("%d",&a);

    while(a!=0)
    {
        b=a%10;
        a=a/10;
        printf("%d",b);
    }

}