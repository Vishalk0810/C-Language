#include<stdio.h>

main()
{
//1        1
//12      21
//123    321
//1234  4321
//1234554321
	int i,j,k,a;
        for (i=1;i<=5;i++)
        { 
        for (j=1;j<=i;j++) 
        {                  
            printf("%d",j);
        }   
        for (a=5;a>i;a--)
        {
            printf("  ");
        }
        for (k=i;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n"); 
    }
}