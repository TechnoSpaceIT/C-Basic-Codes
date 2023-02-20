#include<stdio.h>
int add(int,int);
int main()
{
	int a,b,c=0;
	printf("Enter the 2 Numbers:");
	scanf("%d %d",&a,&b);
	c=add(a,b);
	printf("\nAddition=%d",c);
	return 0;
}
int add(int x,int y)
{
	return x+y;
}