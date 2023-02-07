#include<stdio.h>
int main()
{
	int n,r=0;
	
	printf("\nEnter the Number:");
	scanf("%d",&n);
	
	while( n > 0 )
	{
		//printf("\nN=%d \t R=%d",n,r);
		r = n % 10;
		printf("%d",r);
		n = n / 10;
	}
	
	return 0;
}