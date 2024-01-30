#include <stdio.h>
#include <stdlib.h>
// constants
#define PAYRATE 			12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40

int main()
{
	int hours = 0;
	double grosspay = 0.0;
	double taxes = 0.0;
	double netpay = 0.0;
	
	printf("PLease Enter the Number of hours worked this week: ");
	scanf("%d", &hours);
	
	//calculate grosspay
    if (hours <= 40) 
		{
		grosspay = hours * PAYRATE;
		}
		else 
		{
			grosspay = hours * PAYRATE;
			double OverTimePay = (hours - 40) * (PAYRATE * 1.5);
			grosspay += OverTimePay;
		}
		// calculate Taxes
	if (grosspay <= 300) 
    {
	   taxes = grosspay * TAXRATE_300;
	} 
	else if(grosspay > 300 && grosspay <= 450)
    {
	  taxes = 300  * TAXRATE_300;
	   taxes += (grosspay - 300) * TAXRATE_150;
	}
	else if (grosspay > 450)
		{
			taxes = 300  * TAXRATE_300;
		    taxes += 150 * TAXRATE_150;
			taxes += (grosspay - 450) * TAXRATE_REST;
		}
		
		 //calculate the netpay
		 
		 netpay = grosspay - taxes;
		 //lets print the grosspay, netpay and taxes

        printf("The grosspay this  week is: %.2f\n", grosspay);
        printf("The  taxes this week is: %.2f\n", taxes);
		printf("The netpay this week is: %.2f\n", netpay);
		
		return 0;
}

