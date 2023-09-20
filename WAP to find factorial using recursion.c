#include<stdio.h>
int fectorial()
{
	int num,f=1,i;
	printf("enter the value:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	return f;
}
main()
{
	int ans;
	ans=fectorial();
	printf("fectorial=%d",ans);
}

