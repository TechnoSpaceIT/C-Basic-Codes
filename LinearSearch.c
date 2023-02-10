#include<stdio.h>
int main()
{
	int a[5],i,x,flag=-1;
	
	printf("\nEnter the 5 Numbers:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nThe Array Numbers are:");
	for(i=0;i<=4;i++)
	{
		printf("\n%d",a[i]);
	}
	
	printf("\nEnter the Number to Search from Array:");
	scanf("%d",&x);

	for(i=0;i<=4;i++)
	{
		printf("\nIteration Done");
		if(x == a[i])
		{
			flag = i+1;
			break;
		}
	}
	
	if(flag == -1)
	{
		printf("\nNumber is Not Present in array");
	}
	else
	{
		printf("\nNumber is Present in array at %d Location",flag);
	}
	
	return 0;
}


