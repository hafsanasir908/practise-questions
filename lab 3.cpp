#include<stdio.h>
#include<string.h>
int main(void)
{
	int n;
	int fact = 1;
	printf("enter number : ");
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++)
	{
	   fact = fact * i;	
	}
	printf("factorial is : %d",fact);
   return 0;
			  }

