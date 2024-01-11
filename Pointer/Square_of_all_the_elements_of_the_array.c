#include<stdio.h>
#include<conio.h>

int square(int *num) 
{
    return (*num) * (*num);
}

void findSquare(int *a, int n) 
{
    for (int i=0; i<n; i++) 
	{
        for (int j=0; j<n; j++)
		{
            int *element = (a + i * n + j);
            int result = square(element);
            printf("%d ",result);
        }
        printf("\n");
    }
}

void main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int a[n][n];

    for (int i=0; i<n; i++) 
	{
        for (int j=0; j<n; j++) 
		{
			printf("a[%d][%d] - ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nCubes of all the elements :\n");
    findSquare(&a[0][0],n);
}