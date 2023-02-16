#include<stdio.h>
void add();		//1. function declaration
void sub();

int main()
{
	add();		//3. function calling
	sub();
	add();
	return 0;
}

void add()		//2. function definition	//Code Reusability
{
	int a,b,c=0;
	printf("\nEnter the 2 numbers:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("\nAddition=%d",c);
}
void sub()
{
	int a,b,c=0;
	printf("\nEnter the 2 numbers:");
	scanf("%d %d",&a,&b);
	c=a-b;
	printf("\nSubstraction=%d",c);
}