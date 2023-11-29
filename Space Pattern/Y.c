#include<stdio.h>

main()
{
    int a, b;
    for(a=1; a<=7; a++)
    {
        for(b=1; b<=5; b++)
        {
            if((a==3 && b==3)||(a==2 && b==3)||(a==1 && b==3))
            {
                printf("  ");
            }
            else if(b==3||(a==2 && b==1)||(a==2 && b==5)||(a==1 && b==1)||(a==1 && b==5)||(a==3 && b==2)||(a==3 && b==4))
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