#include<stdio.h>
main()
{
	int i,num,f=1;
	printf("enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	printf("\nfactorial=%d",f);
}
