#include<stdio.h>

main()
{
    int a, b;
    for(a=1; a<=7; a++)
    {
        for(b=1; b<=5; b++)
        {
            if(a==4 || b==1 || b==5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
             printf("\n");
    }

}