#include<stdio.h>

main()
{
//ABCDE
// BCDE
//  CDE
//   DE
//    E
    char i,j,k;
    
    for(i='A';i<='E'; i++)
    {
    	for(k='A'; k<i; k++)
    	{
    		printf(" ");
		}
        for(j=i;j<='E';j++)
        {
            printf("%C",j);
        }
        printf("\n");
    }
}