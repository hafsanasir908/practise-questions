#include<stdio.h>
int main()
{
	
	int units , bill;
	printf("enter your units\n");
	scanf("%d",&units);
	
	if(units<=100)
	{
		bill = units * 5; //RS 5/unit
		printf("your bill is : %d",bill);
	}
	
  else if(units<=300)
	{
		bill = units * 7; //RS 7/unit
		printf("your bill is : %d",bill);
	}
	
	else if(units>300)
	{
		bill = units * 10; //RS 10/unit
		printf("your bill is : %d",bill);
	}
	
}
