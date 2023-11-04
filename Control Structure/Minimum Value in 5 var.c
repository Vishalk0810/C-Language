#include<stdio.h>

main()
{
	int a,b,c,d,e;
	
	printf("Enter The Values :");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	
	// a,b,c,d,e;
	if(a<b)
	{
		// a,c,d,e;
		if(a<c)
		{
			// a,d,e;
			if(a<d)
			{
				// a,e;
				if(a<e)
				{
					printf("The Minimum Value is a");
				}
				else
				{
					printf("The Minimum Value is e");
				}
			}
			else
			{
				if(d<e)
				{
					printf("The Minimum Value is d"); 
				}
				else
				{
					printf("The Minimum Value is e");
				}
			}
		}
		else
		{
			// a,c,d,e;
			if(c<d)
			{
				if(c<e)
				{
					printf("The Minimum Value is c");
				}
				else
				{
					printf("The Maximum Value is e");
				}
			}
			else
			{
				printf("The Maximum Value is d");
			}
		}
	}
	else
	{
		// b,c,d,e;
		if(b<c)
		{
			//b,d,e
			if(b<d)
			{
				//b,e
				if(b<e)
				{
					printf("The Minimum Value is b");
				}
				else
				{
					printf("The Minimum Value is e");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					printf("The Minimum Value is d");
				}
				else
				{
					printf("The Minimum Value is e");
				}
			}
		}
		else
		{
			//c,d,e
			if(c<d)
			{
				if(c<e)
				{
					printf("The Minimum Value is c");
				}
				else
				{
					printf("The Minimum Value is e");
				}
			}
			else
			{
				printf("The Minimum Value is d");
			}
		}
	}
}