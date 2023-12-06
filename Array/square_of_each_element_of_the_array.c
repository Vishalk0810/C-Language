#include<stdio.h>

main()
{
    int n,i,square;//n used for size of array and i used for loop counter and square to store the value of elements square
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];//declaration of array
    
    for(i=0; i<n; i++)
    {
        printf("Enter the elements of the array : ");
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Square of the elements :\n");
    //squaring the each element in the array
    for(i=0; i<n; i++)
    {
        square=a[i]*a[i];
        printf("%d : %d\n",a[i],square);
    }
}