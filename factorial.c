//Program to calculate Factorial of any number
#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("\nEnter any number:");
	scanf("%d",&n);
	
	for(i = n ; i >= 1 ; i-- )
	{
		fact = fact * i;
	}
	printf("\nFactorial=%d",fact);
	return 0;
}