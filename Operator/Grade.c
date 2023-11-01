#include<stdio.h>

main()
{
	int p,m,c,b,com,total;
	float per;
	printf("PHYSICS:");
	scanf("%d",&p);
	printf("MATH:");
	scanf("%d",&m);
	printf("CHEMISTRY:");
	scanf("%d",&c);
	printf("BIOLOGY:");
	scanf("%d",&b);
	printf("Computer:");
	scanf("%d",&com);
	total=p+c+m+b+com;
	per=total/5;
	printf("percentage is:%.2f\n",per);
	
	 if (per>=90 && per<=100)
	  {
		printf("Grade:A");
	  }
	 else if (per>=80 && per<90)
	 {
		printf("Grade:B");
	 }
	 else if (per>=70 && per<80)
	 {
		printf("Grade:C");
	 }
	 else if (per>=60 && per <70)
	 {
		printf("Grade:D");
	 }
	else if (per>=40 && per<50)
	 {
		printf("Grade:E");
	 }
	 else if (per<40)
	 {
		printf("Failed");
	 }


}
