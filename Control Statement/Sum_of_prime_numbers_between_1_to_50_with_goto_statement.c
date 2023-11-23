#include<stdio.h>

main()
{
    
    int a=2,sum=0,n;
    
    prime:
    
    if(a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0 && a%11!=0 || a==2 || a==3 || a==5 || a==7 || a==11)
    {
       printf("%d ",a);
       sum=a+sum;
    }
    a++;
    if(a<=50)
    {
       goto prime;
    }
    
    printf("\nSum of Prime number between 1 to 50 is : %d",sum);

}