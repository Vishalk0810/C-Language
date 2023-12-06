#include<stdio.h>

main()
{
    int n,i,j;//n used for size of array and i,j used for loop counter
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];//declaration of array
    int temp;//to store ascending order value
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    //making in ascending order
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nArray elements in ascending order : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}