#include <stdio.h> 

main()
{
	
   int n, i=1;
 
    printf("Enter a Number ");
    scanf("%d",&n);
 
    do
    {
        printf("%d * %d = %d \n", n, i, n*i);
        i++;
    } while(i<=10);
    
}