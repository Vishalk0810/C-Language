#include<stdio.h>

main()
{
	int a,b;
	printf("Enter the value of A : ");
	scanf("%d",&a);
	printf("Enter the value of B : ");
	scanf("%d",&b);
	int *ptr1 = &a;
	int *ptr2 = &b;
	int *ptr3;
	ptr3 = ptr1;
	ptr1 = ptr2;
	ptr2 = ptr3;
	printf("Value of a is : %d\n",*ptr1);
	printf("Value of b is : %d",*ptr2);

}