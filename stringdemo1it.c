#include<stdio.h>
int main()
{
	char name1[10];
	int length=0;
	printf("\nEnter the Name1:");
	scanf("%s",&name1);
	
	printf("\nName1=%s",name1);
	
	strupr(name1);
	printf("\nName1 in Uppercase=%s",name1);
	
	strlwr(name1);
	printf("\nName1 in Lowercase=%s",name1);
	
	strrev(name1);
	printf("\nName1 in Reverse=%s",name1);
	
	length = strlen(name1);
	printf("\nLength of Name1=%d",length);
	return 0;
}