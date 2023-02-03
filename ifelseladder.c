//Program for Taking 5 Subject Marks as Input and
//Calculating Grade on the basis of Percentage
#include<stdio.h>
int main()
{
	int marathi,hindi,eng,hist,geo;
	float total=0.0,perc=0.0;
	
	//Taking 5 Subject Marks as Input from User
	printf("\nEnter the Marks for Marathi:");
	scanf("%d",&marathi);
	printf("\nEnter the Marks for Hindi:");
	scanf("%d",&hindi);
	printf("\nEnter the Marks for English:");
	scanf("%d",&eng);
	printf("\nEnter the Marks for History:");
	scanf("%d",&hist);
	printf("\nEnter the Marks for Geography:");
	scanf("%d",&geo);
	
	//Calculating Total and Percentage for Grade Calculation
	total=marathi+hindi+eng+hist+geo;
	printf("\nTotal Marks:%f",total);
	perc=total/5;
	printf("\nPercentage:%f",perc);
	
	//Calculating Grade on the basis of Percentage
	if(perc>=35 && perc<55)
	{
		printf("\n Student Pass with D Grade.");
	}
	else if(perc>=55 && perc<65)
	{
		printf("\n Student Pass with C Grade.");
	}
	else if(perc>=65 && perc<75)
	{
		printf("\n Student Pass with B Grade.");
	}
	else if(perc>=75 && perc<85)
	{
		printf("\n Student Pass with A Grade.");
	}
	else if(perc>=85 && perc<=100)
	{
		printf("\n Student Pass with A+ Grade.");
	}
	else
	{
		printf("\n Student is Fail.");
	}
	
	return 0;	
}