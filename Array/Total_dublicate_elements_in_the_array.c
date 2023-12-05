#include<stdio.h>

main()
{
    int n,duplicate;//n is for size of array and duplicate used for the elements repeated in the array
    printf("Enter the size of array : ");
    scanf("%d",&n);
    
    int a[n];
    int i,j;//loop counters
    
    for(i=0; i<n; i++)
    {
        printf("Enter the values in array : ");
        scanf("%d",&a[i]);
    }
    
    //check the duplicate number using nested loop
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                duplicate++;
                break;
            }
        }
    }
    printf("Total number of elements duplicate in the array : %d",duplicate);
}