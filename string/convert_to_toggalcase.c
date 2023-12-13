#include<stdio.h>
//5. WAP to convert given string in Toggal Case.
main()
{
	int n;
	
	printf("Enter the num. of charecter : ");
	scanf("%d",&n);
	
	char a[n];
	int i;
	
	printf("Enter the char. : ");
	scanf("%s",&a);
	
	for(i=0; i<n; i++)
	{
		if(a[0]>=97 && a[0]<=122)
		{
			a[0] = a[0] - 32;
		}
		if(a[i]>=65 && a[i]<=90)
		{
			a[i] = a[i] + 32;
		}
	}
	
	printf("%s",a);
}s
