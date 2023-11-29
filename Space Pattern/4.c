#include<stdio.h>

main()
{
//    5
//   54
//  543
// 5432
//54321
    int i,j,k;
    for (i=5;i>=1;i--)
    {
    	for(k=1; k<i; k++)
    	{
    		printf(" ");
		}
        for (j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}