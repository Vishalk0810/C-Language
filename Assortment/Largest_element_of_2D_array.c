#include<stdio.h>

main()
{
    int n,i,j;//n is for size of array amd i,j is for loop counters
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n][n];//array declare
    
    //user input of the elements in the array
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("a[%d][%d] - ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    int largest=a[0][0];//to store the largest element of the array
    //process to find the largest element of the array
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]>largest)
            {
               largest=a[i][j];
            }
        }
    }
    printf("The largest element of the array is : %d",largest);
}