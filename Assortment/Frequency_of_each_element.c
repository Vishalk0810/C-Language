#include <stdio.h>

main() 
{
    int n,i,j;//n is for size of array and i,j for loop counters
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];//array declare
    //user input of the element
    for(i=0; i<n; i++)
    {
        printf("a[%d] - ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    //print the array elements
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
    //the to find the frequency
    for (i=0; i<n; i++)
    {
        int frequency=1;
        for (j=i+1; j<n; j++) 
        {
            if (a[i]==a[j]) 
            {
                frequency++;
                a[j]=-1; // Mark the element as visited
            }
        }
        if (a[i]!=-1) 
        {
            printf("Element %d occurs %d times\n",a[i],frequency);
        }
    }

}
