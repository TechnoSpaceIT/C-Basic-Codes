#include<stdio.h>
int main()
{
	char name[20];
	int i,count=0;
	printf("\nEnter the Name:");
	scanf("%s",&name);
	
	for(i=0;i<=9;i++)
	{
		printf("\n%c",name[i]);
		if(name[i]=='\0')
		{
			break;
		}
		count++;
	}
	printf("\nCount=%d",count);
	return 0;
}
//a e i o u = Vowels

//asdEfGR
//EDF2342DDD
//asd123ERFD
//as12ERD
//String = 1 Capital, 1 Small, 1 Digit, 8 Char

//String - A-Z, a-z, 0-9

//Interview - 3/4  -->  Experiece
//1-2 Technical    --> 1. Basic       2. Advanced Concepts