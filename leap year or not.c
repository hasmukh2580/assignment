#include<stdio.h>
main()
{
	int year;
	printf("enter a year:");
	scanf("%d",&year);
	if(year%5==0)
	{
		printf("it is a leap year");
	}
	else
	{
		printf("it is not a leap year");
	}
}
