#include<stdio.h>
int main()
{
	//int a=65;
	//printf("\n%c",a);
	//Char  -> Binary   ->  ASCII
	//A  ->  0100 0001  ->  65
	//B  ->  0100 0010  ->  66
	//Z  ->             ->  90
	//a  ->             ->  92
	//z  ->             ->  117
	char password[20];
	int i,capital=0,small=0,digit=0,length=0;
	printf("\nEnter the Password:");
	scanf("%s",&password);

	for(i=0;i<=19;i++)
	{
		if(password[i]=='\0')
		{
			break;
		}
		if(password[i]>=65 && password[i]<=90)
		{
			capital++;
			//printf("\nCapital Found");
		}
		if(password[i]>=92 && password[i]<=117)
		{
			small++;
			//printf("\nSmall Found");
		}
		if(password[i]>='0' && password[i]<='9')
		{
			digit++;
			//printf("\nDigit Found");
		}
		length++;
	}
	//printf("\nLength=%d",length);
	if(length>=8 && capital>=1 && small>=1 && digit>=1)
	{ 
		printf("\nPassword is Best with Conditions");
	}
	else
	{
		printf("\nPassword Not following Conditions");
	}
	return 0;
}






