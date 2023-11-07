#include <stdio.h>

main() 
{
	
   int a;
   printf("Welcome To The Customer Care\n");
   printf("Enter The Number : ");
   scanf("%d",&a);
   
   switch(a)
   {
   	 case 1 : printf("Choose The Language ? \n");
   	 int lan;
   	 printf("Enter 1 For English And 2 For Hindi : \n");
     scanf("%d",&lan);
     
     switch(lan)
     {
     	case 1 : printf("English...");
     	break;
     	case 2 : printf("Hindi...");
		break;
		default : printf("Enter The Value Between 1 to 2"); 
	 }
   	 break;
   	 
   	 case 2 : printf("Sim Card Problem\n");
   	 int sim;
   	 printf("Enter 1 For New Sim Card Or 2 For Port Sim Card\n");
   	 scanf("%d",&sim);
   	 
   	 switch(sim)
   	 {
   	 	case 1 : printf("We Have Accepted Your Request Your New Sim Card Will Delevired Soon...");
   	 	break;
   	 	case 2 : printf("We Have Accepted Your Request Your Sim Will Be Port Soon...");
		break;
		deafult : printf("Enter The Value Between 1 to 2");
	 }
	 break;
	 
   	 case 3 : printf("Network Issues\n");
   	 int net;
   	 printf("Enter 1 For Network Not Comming...\n");
   	 scanf("%d",&net);
   	 
   	 switch(net)
   	 {
   	 	case 1 : printf("We Have Accepted Your Request Your Problem Will Be Solve Soon...");
   	 	break;
		default : printf("Enter The Value 1 Only...");
	 }
	 break;
   	 
   	 case 4 : printf("For Recharge\n");
   	 int rec;
   	 printf("Recharge Plan\n");
   	 scanf("%d",&rec);
   	 
   	 switch(rec)
   	 {
   	 	case 1 : printf("Rs. 239 - For 28 Days");
   	 	break;
   	 	case 2 : printf("Rs. 666 - For 84 Days");
		break;
		case 3 : printf("Rs. 2399 - For 1 Year");
		break;
		default : printf("Enter The Value Between 1 to 3");
	 }
	 break;
	 default : printf("Enter The Value Between 1 to 4");
	 
}
}
