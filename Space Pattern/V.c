#include<stdio.h>

main()
{
    int a, b;
    for(a=1; a<=7; a++)
    {
        for(b=1; b<=5; b++)
        {
            if((a==7 && b==1)||(a==7 && b==5)||(a==6 && b==1)||(a==6 && b==5))
            {
                printf("  ");
            }
            else if(b==1 || b==5 || (a==7 && b==3) || (a==6 && b==2) || (a==6 && b==4))
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