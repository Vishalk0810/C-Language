#include<stdio.h>

main()
{
    int n,i;//n used for size of array and i used for loop counter
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];//declaration of array
    
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    int max=a[0];//max is used to store maximum element of the array
    
    
    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("\nMaximum element of the array is : %d",max);
}