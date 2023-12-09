#include<stdio.h>

main()
{
    int n,i,j;//n is for size of array and i,j is for loop counter
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    int largest=a[0],secondLargest=a[0];//largest and second largest value store
    
    for(i=0; i<n; i++)
    {
        printf("Enter the elements of the array : ");
        scanf("%d",&a[i]);
    }
    //process od finding second largest element of the array
    for(i=0; i<n; i++)
    {
        if(a[i]>largest)
        {
            secondLargest=largest;
            largest=a[i];
        }
        else if(a[i]>secondLargest && a[i]<largest)
        {
            secondLargest=a[i];
        }
    }
    printf("\nThe second largest element of the array is : %d",secondLargest);
}