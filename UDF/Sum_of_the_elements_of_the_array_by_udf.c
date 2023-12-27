#include<stdio.h>
#include<conio.h>

void sum(int n)
{
    int i,sum=0;
    int a[n];
    
    for(i=0; i<n; i++)
    {
        printf("a[%d] - ",i);
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("Sum of the elements of the array is : %d",sum);
}

void main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    sum(n);
}