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
    int min=a[0];//min is used to store minimum element of the array
   
    for(i=0; i<n; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\nMinimum element of the array is : %d",min);
}