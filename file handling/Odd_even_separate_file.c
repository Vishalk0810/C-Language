#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *even;
    even = fopen("even.txt","w");
    FILE *odd;
    odd = fopen("odd.txt","w");
    
    int i;
    
    fprintf(even,"Even numbers between 50 to 70 : \n");
    fprintf(odd,"Odd numbers between 50 to 70 : \n");
    for(i=50; i<=70; i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
            fprintf(even,"%d ",i);
        }
        else
        {
            printf("%d ",i);
            fprintf(odd,"%d ",i);
        }
    }
}