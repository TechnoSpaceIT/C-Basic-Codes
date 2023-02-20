#include<stdio.h>
void add(int *,int *);
void sub(int *,int *);
int main()
{
	int a,b;		
	printf("\nEnter the 2 Numbers:");
	scanf("%d %d",&a,&b);
	add(&a,&b);		
	sub(&a,&b);
	return 0;
}
void add(int *x,int *y)	
{
	printf("\nAddition=%d",(*x)+(*y));
}
void sub(int *m,int *n)
{
	printf("\nSubstraction=%d",(*m)-(*n));
}