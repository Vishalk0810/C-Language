#include<stdio.h>

main()
{
	
	int week;
	printf("Enter The Values : ");
	scanf("%d",&week);
	
	switch(week)
	{
		case 1 : printf("Sunday");
		break;
		case 2 : printf("Monday");
		break;
		case 3 : printf("Tuesday");
		break;
		case 4 : printf("Wednesday");
		break;
		case 5 : printf("Thursday");
		break;
		case 6 : printf("Friday");
		break;
		case 7 : printf("Saturday");
		break;
		default: printf("Enter The Valid Value Between 1 to 7");
	}
	
}
