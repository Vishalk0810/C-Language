#include<stdio.h>

main()
{
//54321
// 4321
//  321
//   21
//    1
    int i,j,k;
    for (i=5;i>=1;i--)
    {
    	for(k=i; k<5; k++)
    	{
    		printf(" ");
		}
        for (j=i; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}