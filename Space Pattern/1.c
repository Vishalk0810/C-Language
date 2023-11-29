#include<stdio.h>

main()
{	
//    1
//   12
//  123
// 1234
//12345
    int i,j,k;
    
    for(i=1; i<=5; i++)
    {
    	for(k=i; k<5; k++)
    	{
    		printf(" ");
		}
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }  
}