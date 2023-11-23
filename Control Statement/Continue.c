#include<stdio.h>

main()
{
    
    int i,n;
    printf("Enter the number u want to skip : ");
    scanf("%d",&n);
    
    for(i=1; i<=10; i++)
    {
        if(i==n)
        {
            continue;
        }
        printf("%d ",i);
    }
    
}