#include<stdio.h>

main()
{
//11111
// 0000
//  111
//   00
//    1
	int i,j,k;
	
	for(i=1; i<=5; i++)
	{
		for(k=1; k<i; k++)
		{
			printf(" ");
		}
		for(j=5; j>=i; j--)
		{
			if(i%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}