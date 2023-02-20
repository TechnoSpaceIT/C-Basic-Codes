#include<stdio.h>
int main()
{
	int a=10;
	int *b;
	printf("\nValue in A=%d",a);
	printf("\nAddress of A=%x",&a);
	
	b=&a;
	printf("\nValue in B=%x",b);
	printf("\nValue at B=%d",*b);
	
	++a;
	printf("\nValue in A=%d",a);
	++(*b);
	printf("\nValue in A=%d",a);
	return 0;
}