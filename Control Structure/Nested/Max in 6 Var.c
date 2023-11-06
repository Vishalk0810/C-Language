#include<stdio.h>

main()
{
	int a,b,c,d,e,f;
	printf("Enter The Value Of A :");
	scanf("%d",&a);
	
	printf("Enter The Value Of B :");
	scanf("%d",&b);
	
	printf("Enter The Value Of C :");
	scanf("%d",&c);
	
	printf("Enter The Value Of D :");
	scanf("%d",&d);
	
	printf("Enter The Value Of E :");
	scanf("%d",&e);
	
	printf("Enter The Value Of F :");
	scanf("%d",&f);
	//a,b,c,d,e,f
	if(a>b)
	{
		//a,c,d,e,f
		if(a>c)
		{
			//a,d,e,f
			if(a>d)
			{
				//a,e,f
				if(a>e)
				{
					//a,f
					if(a>f)
					{
						//a
					printf("A is Max");
				    }
				    else
				    {
				    	//f
				    	printf("F is Max");
					}
				}
				else
				{
					//e,f
					if(e>f)
					{
						//e
						printf("E is Max");
					}
					else
					{
						//f
						printf("F is Max");
					}
				}
			}
			else
			{
				//d,e,f
				if(d>e)
				{
					//d,f
					if(d>f)
					{
						//d
						printf("D is Max");
					}
					else
					{
						printf("F is Max");
					}
				}
				else
				{
					//e,f
					if(e>f)
					{
						//e
						printf("E is Max");
					}
					else
					{
						//f
						printf("F is Max");
					}
				}
			}
		}
		else
		{
			//c,d,e,f
			if(c>d)
			{
				//c,e,f
				if(c>e)
				{
					//c,f
					if(c>f)
					{
						//c
						printf("C is Max");
					}
					else
					{
						//f
						printf("F is Max");
					}
				}
				else
				{
					//e,f
					if(e>f)
					{
						//e
						printf("E is Max");
					}
					else
					{
						//f
						printf("F is Max");
					}
				}
			}
			else
			{
				//d,e,f
				if(d>e)
				{
					//d,f
					if(d>f)
					{
						//d
						printf("D is Max");
					}
					else
					{
						//f
						printf("F is Max");
					}
				}
				else
				{
					//e,f
					if(e>f)
					{
						//e
						printf("E is Max");
					}
					else
					{
						//f
						printf("F is Max");
					}
				}
			}
		}
	}
	else
	{
		//b,c,d,e,f
		if(b>c)
		{
			//b,d,e,f
			if(b>d)
			{
				//b,e,f
				if(b>e)
				{
					//b,f
					if(b>f)
					{
						//b
						printf("B is Max");	
					}
					else
					{
						//f
						printf("F is Max");
					}
				}
				else
				{
					//e,f
					if(e>f)
					{
						//e
						printf("E is Max");
					}
					else
					{
						//f
						printf("F is Max");
					}
				}
			}
			else
			{
				//d,e,f
				if(d>e)
				{
					//d,f
					if(d>f)
					{
						//d
						printf("D is Max");
					}
					else
					{
						//f
						printf("F is Max");
					}
				}
				else
				{
					//e,f
					if(e>f)
					{
						//e
						printf("E is Max");
					}
					else
					{
						//f
						printf("F is Max");
					}
				}
			}
		}
		else
		{
			//c,d,e,f
			if(c>d)
			{
				//c,e,f
				if(c>e)
				{
					//c,f
					if(c>f)
					{
						//c
						printf("C is Max");
					}
					else
					{
						//f
						printf("F is Max");						
					}
				}
				else
				{
					//e,f
					if(e>f)
					{
						//e
						printf("E is Max");
					}
					else
					{
						//f
						printf("F is Max");
					}
				}
			}
			else
			{
				//d,e,f
				if(d>e)
				{
					//e,f
					if(e>f)
					{
						//e
						printf("E is Max");
					}
					else
					{
						//f
						printf("F is Max");
					}
				}
				else
				{
					//e,f
						if(e>f)
					{
						//e
						printf("E is Max");
					}
					else
					{
						//f
						printf("F is Max");
					}
				}
			}
		}
	}
}