#include<stdio.h>

main()
{
    
    int i=1,n,m=1;
    printf("Enter the value : ");
    scanf("%d",&n);
    
    factorial:
    if(i<=n)
    {
        m=m*i;
        i++;
        goto factorial;
    }
    printf("%d",m);
    
}