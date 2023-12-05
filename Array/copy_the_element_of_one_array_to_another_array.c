#include<stdio.h>

main()
{
    int i,n;
    printf("Enter the size of : ");
    scanf("%d",&n);
    int a[n],b[n];
    
    for(i=0; i<n; i++)
    {
        printf("Enter the values in array : ");
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        b[i]=a[i];
        printf("%d ",b[i]);
    }
    
}