#include <stdio.h>

main()
{
   int i,n;

   printf("Enter the size of array : ");
   scanf("%d",&n);
   int a[n];
   
   for(i=0; i<n; i++)
   {
   	 printf("Enter the values in array : ");
   	 scanf("%d",&a[i]);
   }
   for(i=0; i<n; i++)
   {
   	 printf("%d ",a[i]);
   }
   printf("\nReveresed value of array : ");
   for(i=n-1; i>=0; i--)
   {
   	printf("%d ",a[i]);
   }
   
}