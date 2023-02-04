//Program to demo for loop - printing odd no bet 1 to 20
#include<stdio.h>
int main()
{
	int i;
	
	for(i = 1 ; i <= 20 ; i++ )
	{
		if(i%2 != 0)
		{
			printf("\n%d",i);
		}
	
	}
	
	return 0;
}