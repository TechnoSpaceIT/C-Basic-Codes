#include<stdio.h>
int main()
{
	int ono,qty,bill=0;
	float discount=0.0,netbill=0.0;
	printf("*** MENU ***");
	printf("\n1. Ice Cream \n2. Cone \n3. Pestries \n4. Exit");
	printf("\nEnter the Order Number:");
	scanf("%d",&ono);
	if(ono>=1 && ono<=3)
	{
		printf("\nEnter the Quantity:");
		scanf("%d",&qty);
	}
	switch(ono)
	{
		case 1:
			printf("\nYour Order is Ice Cream with Price 25 Rs.");
			bill=qty*25;
			printf("\nBill=%d",bill);
		break;
		case 2:
			printf("\nYour Order is Cone with Price 35 Rs.");
			bill=qty*35;
			printf("\nBill=%d",bill);
		break;
		case 3:
			printf("\nYour Order is Pestries with Price 45 Rs.");
			bill=qty*45;
			printf("\nBill=%d",bill);
		break;
		case 4:
			printf("\n Bye Bye!!! Thanks for Visit.");
		break;
		default:
			printf("\nInvalid Order Number.");
		break;
	}
	if(bill>=200)
	{
		printf("\nHurray!!! You got 10% Discount.");
		discount=bill*0.10;
		printf("\nDiscount=%f",discount);
		netbill=bill-discount;
		printf("\nNet Bill=%f",netbill);
	}
	else
	{
		printf("\nSorry!! You are not applicable for Discount.");
	}
	return 0;
}