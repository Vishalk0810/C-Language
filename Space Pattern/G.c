#include<stdio.h>

main()
{
    int a, b;
    for(a=1; a<=7; a++)
    {
        for(b=1; b<=5; b++)
        {
            if((a==1 && b==5)||(a==1 && b==1)||(a==7 && b==1)||(a==7 && b==5) ||(a==3 && b==5))
            {
                printf("  ");
            }
            else if(a==1 || a==7 || b==1 || b==5 || (a==4 && b==4) || (a==4 && b==3))
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