#include<stdio.h>

main() 
{
    
   int a = 20,b = 10;
   
   a = a * b;
   b = a / b;
   a = a / b;
   
   printf("a = %d b = %d\n", a, b);
   
}