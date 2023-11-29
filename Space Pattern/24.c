#include<stdio.h>

main()
{
//12345
//1234
//123
//12
//1
//12
//123
//1234
//12345
int i,j,a,b;
    for (i=5;i>=1;i--)
    { 
        for (j=1;j<=i;j++) 
        {                  
            printf("%d",j);
        }
        printf("\n"); 
    }
    for (a=2;a<=5;a++)
    {
        for (b=1;b<=a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    } 
}
