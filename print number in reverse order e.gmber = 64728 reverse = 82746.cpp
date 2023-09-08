#include<stdio.h>
main()
{
	int n,reverse=0,remainder=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		remainder=n%10;
		reverse=reverse*10+remainder;
		n/=10;
	}
	printf("%d is reverse of number",reverse);
}
