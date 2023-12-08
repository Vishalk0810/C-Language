#include<stdio.h>

main()
{
    int n,i;//n is size of array and i is for loop counter
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
   
   for(i=0; i<n; i++)
   {
       printf("Enter the elements of array : ");
       scanf("%d",&a[i]);
   }
   printf("Negative elements of the array : \n");
   for(i=0; i<n; i++)
   {
       if(a[i]<0)
       {
           printf("%d",a[i]);
       }
   }
}