#include<stdio.h>
int main()
{
	char name1[10],name2[10];
	int cmp;
	
	printf("\nEnter the Name1:");
	scanf("%s",&name1);
	printf("\nEnter the Name2:");
	scanf("%s",&name2);
	
	printf("\nName1=%s \nName2=%s",name1,name2);
	
	cmp = strcmp(name1,name2);
	printf("\nCompare result=%d",cmp);
	if(cmp==0)
	{
		printf("\nNames are Same");
	}
	else
	{
		printf("\nNames are Not Same");
	}
	
	//printf("\nAfter Copy Operation:");
	//strcpy(name1,name2);
	//printf("\nName1=%s \nName2=%s",name1,name2);
	
	printf("\nAfter Concatnation Operation:");
	strcat(name1,name2);
	printf("\nName1=%s \nName2=%s",name1,name2);
	return 0;
}