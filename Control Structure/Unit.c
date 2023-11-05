#include<stdio.h>

main()
{
	
	int unit;
	float amount, totalamount,GST;
	printf("Enter the unit");
	scanf("%d",&unit);
	
	if(unit>0 && unit<=50)
	{
		amount= unit*0.5;
	}
	else if(unit>50 && unit<=100)
	{
		amount= 25+((unit-50)*0.75);
	}
	else if(unit>100 && unit<=150)
	{
		amount= 62.5+((unit-100)*1.25);
	}
	else if(unit>150 && unit<=250)
	{
		amount= 162.5+((unit-150)*1.50);
	}
	
	GST= amount*0.20;
	totalamount= amount+GST;
	
	printf("Your Bill is: Rs. %.2f",totalamount);
	
}