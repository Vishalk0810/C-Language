#include<stdio.h>

main()
{
    
    int i=1,n,sum=0;
    printf("Enter the value : ");
    scanf("%d",&n);
    
    sum:
    if(i<=n)
    {
        sum=sum+i;
        i++;
        goto sum;
    }
    printf("%d",sum);
    
}