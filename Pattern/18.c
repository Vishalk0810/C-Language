#include<stdio.h>

main()
{
//0
//0 1
//0 1 0
//0 1 0 1
//0 1 0 1 0
	int i,j;
    
    for(i=0; i<=4; i++)
    {
        for(j=0; j<=i; j++)
        {
        	if(j%2==1)
        	{
        		printf("1 ");
			}
			else
			{
				printf("0 ");
			}
        }
        printf("\n");
    }  
}