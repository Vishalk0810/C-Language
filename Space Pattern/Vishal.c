#include<stdio.h>

main()
{
    int a,b,c,d,e,f,g;
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
        }printf("  ");
        for(c=1; c<=5; c++)
        {
            if(a==1 || a==7 || c==3)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }printf("  ");
        for(d=1; d<=5; d++)
        {
            if((a==1 && d==1)||(a==1 && d==5)||(a==7 && d==1)||(a==7 && d==5)||(a==4 && d==1)||(a==4 && d==5)||(a==5 && d==1)||(a==3 && d==5))
            {
                printf("  ");
            }
            else if(a==1 || a==4 || a==7 || d==1 || d==5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");        
            }
        }printf("  ");
          for(e=1; e<=5; e++)
        {
            if(a==4 || e==1 || e==5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }printf("  ");
        for(f=1; f<=5; f++)
        {
           if(a==1 || a==3 || f==1 || f==5)
           {
                printf("* ");
           }
            else
            {
                printf("  ");
            }
        }printf("  ");
        for(g=1; g<=5; g++)
        {
            if(a==7 || g==1)
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