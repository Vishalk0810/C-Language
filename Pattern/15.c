#include<stdio.h>

main()
{
//1
//0 1
//1 0 1
//0 1 0 1
//1 0 1 0 1
	int i,j;
    
    for(i=1; i<=5; i++)
    {
        for(j=i; j>=1; j--)
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