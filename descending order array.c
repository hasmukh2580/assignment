#include<stdio.h>
int main()
{
	int num[20],i,j,n,a;
	printf("how many elements you want to enter?\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;++i)
    scanf("%d",&num[i]);
    for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(num[i]>num[j])
			{
				a=num[i];
                num[i]=num[j];
                num[j]=a;
			}
		}
	}
	printf("The numbers in ascending order is:\n");
	for(i=0;i<n;++i)
	{
		printf("%d \n", num[i]);
	}
	return 0;
}
