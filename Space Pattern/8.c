#include<stdio.h>

main()
{
//12345
// 2345
//  345
//   45
//    5
    int i,j,k;
    
    for(i=1;i<=5; i++)
    {
    	for(k=1; k<i; k++)
    	{
    		printf(" ");
		}
        for(j=i;j<=5;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}