#include<stdio.h>
#include<string.h>
int main(void)
{
	//swapping
	
	int a;
	int b;
	printf("enter value of a and b : ");
	scanf("%d %d",&a , &b);
	
//	int temp = a;
//	a = b;
//	b = temp;

a = a + b;
b = a - b;
a = a - b;
	
	printf("value of a and b is : %d , %d",a,b);
   return 0;
			  }

