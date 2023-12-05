#include<stdio.h>

main()
{
    int i,n,sum;
    printf("Enter the size of : ");
    scanf("%d",&n);
    int a[n];
    
    for(i=0; i<n; i++)
    {
        printf("Enter the values in array : ");
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    printf("\nSum of the array is : %d",sum);
    
}