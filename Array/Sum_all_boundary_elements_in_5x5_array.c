#include <stdio.h>

main()
{
    int a[5][5] = {{1, 2, 3, 4, 5},{6, 7, 8, 9, 1},{3, 2, 5, 9, 7},{2, 4, 1, 8, 4},{6, 8, 3, 2, 6}};

    int sum=0,i,j;//sum storing the sum of square boundaries and i,j for loop counters

    for (i=0; i<5; i++) 
    {
        for (j=0; j<5; j++) 
        {
            if (i==0 || i==4 || j==0 || j==4)
            {
                //sum process and printing square boundaries
                sum+=a[i][j]*a[i][j];
                printf("%d ",a[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    //sum of the boundaries
    printf("Sum of the square boundaries : %d\n",sum);

}

