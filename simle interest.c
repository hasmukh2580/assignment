#include<stdio.h>
main()
{
	float p,r,t,si;
	printf("enter the princle amount:");
	scanf("%f",&p);
	printf("enter the rate:");
	scanf("%d",&r);
	printf("enter the time:");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("the simple interst is %f",si);
}
