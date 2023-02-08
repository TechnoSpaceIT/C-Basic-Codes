#include<stdio.h>
int main()
{
	int ono;
	char confirm;
	
	do
	{
		printf("\n*** MENU ***");
		printf("\n1. Ice Cream \n2. Cone \n3. Pestries \n4. EXIT");
		printf("\nEnter the Order Number:");
		scanf("%d",&ono);
		
		switch(ono)
		{
			case 1:
				printf("\nYour Order is Ice Cream with Price 25 Rs.");
				break;
			case 2:
				printf("\nYour Order is Cone with Price 35 Rs.");
				break;
			case 3:
				printf("\nYour Order is Pestries with Price 45 Rs.");
				break;
			case 4:
				printf("\nBye Bye !!!");
				break;
			default:
				printf("\nInvalid Order Number");
				break;
		}
		printf("\nDo You want to order something else? (y-YES/n-NO):");
		scanf("%s",&confirm);
	}while(confirm=='y');
	return 0;
}