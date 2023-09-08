#include<stdio.h>
main()
{
	int a[6]={5,4,6,7,8,9};
	int i,sum;
	
    for(i=0;i<6;i++)
     {
     	printf("\n%d",a[i]);
     	sum=sum+a[i];
	 }
	 printf("\nsum=%d",sum);
}
