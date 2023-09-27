#include<stdio.h>
#include<string.h>

struct person
{
	int age;
	char employno[4];
	char employname[20];
	char add[6];
}
main()
{
	struct person s;
	
	printf("enter employe age :");
	scanf("%s",&s.age);
	printf("enter emoloye no:");
	scanf("%s",&s.employno);
	printf("enter employe name:");
	scanf("%s",&s.employname);
	printf("enter employe add:");
	scanf("%s",&s.add);
	
	
	printf("\nemploye age : %d",s.age);
	printf("\nemploye no : %s",s.employno);
	printf("\nemploye name : %s",s.employname);
	printf("\nemploye add : %s",s.add);
}

