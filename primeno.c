#include<stdio.h>
int main()
{
	int n,i,flag=1;
	printf("\nEnter the Number to check for Prime:");
	scanf("%d",&n);
	
	if(n == 1 || n == 2)
	{
		flag=1;
	}
	else
	{
		for(i = 2; i <= n-1; i++)
		{
			printf("\nn=%d \t i=%d",n,i);
			if(n%i == 0)
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("\nNumber is Prime");
	}
	else
	{
		printf("\nNumber is Not Prime");
	}
	return 0;
}