#include<stdio.h>
main()
{
	int number1,number2,addition,subtraction,multiplication;
	float divide;	
	printf("enter number1\n");	
	scanf("%d",&number1);
	printf("enter number2\n");		
	scanf("%d",&number2);
	addition =number1+number2;	
	subtraction=number1-number2;	
	multiplication=number1*number2;		
	divide= number1/(float)number2;	
	printf("addition=%d\n",addition);
	printf("subtraction=%d\n",subtraction);
	printf("multiplication=%d\n",multiplication);
	printf("division=%2f\n",divide);
		
}
