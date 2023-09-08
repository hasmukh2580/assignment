#include<stdio.h>
main()
{
	int x,y;
	printf("enter the value of x and y:");
	scanf("%d%d",&x,&y);
	printf("before swaping numbers:%d  %d\n",x,y);	
	y=x-y;	
	x=x-y;	
	printf("after swaping:%d    %d\n",x,y);		
}
