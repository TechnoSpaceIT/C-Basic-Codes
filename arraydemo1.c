#include<stdio.h>
int main()
{
	//int a[5] = {10,20,30,40,50};
	
	//int a[5];
	//a[4]=90; a[1]=40; a[0]=70; a[2]=50; a[3]=80;
	
	int a[5],i,sum=0;
	printf("\nEnter the 5 Numbers:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray Numbers are:");
	for(i=0;i<=4;i++)
	{
		printf("\n%d",a[i]);
		//sum = sum + a[i];
	}
	//printf("\nSum of Array=%d",sum);
	printf("\nEnter any Number to Search from Array:");
	
	return 0;
}