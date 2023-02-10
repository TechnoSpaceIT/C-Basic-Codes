#include<stdio.h>
int main()
{
	int a[7]={12,23,35,44,59,62,78},i,x,low=0,high=6,mid=0,flag=-1;
	printf("\nEnter the Number to Search:");
	scanf("%d",&x);
	
	for(i=0;i<=6;i++)
	{
		printf("\nIteration Done");
		mid = (low+high)/2;
		
		if(x == a[mid])
		{
			flag=mid;
			break;
		}
		if(x > a[mid])
		{
			low=mid+1;
		}			
		else
		{
			high=mid-1;
		}
	}
	if(flag==-1)
	{
		printf("\nNumber Not Present in Array");
	}
	else
	{
		printf("\nNumber is Present in array at %d Location",flag);
	}
	
	return 0;
}