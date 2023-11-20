#include <stdio.h>

main()
{
	
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    do
    {
        printf("%d ",n);
        n--;
    }while(n>=1);
    
}