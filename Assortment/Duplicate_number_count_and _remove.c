#include <stdio.h>

main() 
{
    int n,i,j,k;

    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements of the array:\n");
    for (i=0; i<n; i++) 
	{
        scanf("%d",&a[i]);
    }

    for (i=0; i<n; i++) 
	{
        for (j=i+1; j<n; j++)
		 {
            if (a[j]==a[i]) 
			{
                for (k=j; k<n; k++) 
				{
                    a[k]=a[k+1];
                }
                n--;
            } 
        }
    }

    printf("Array after removing duplicate values:\n");
    for (i=0; i<n; i++) 
	{
        printf("%d ", a[i]);
    }

}
