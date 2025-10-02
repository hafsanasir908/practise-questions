#include<stdio.h>
int main()
{
	int a , b , c , d;
	printf("enter value of a\n");
	scanf("%d",&a);
	
	printf("enter value of b\n");
	scanf("%d",&b);
	
	printf("enter value of c\n");
	scanf("%d",&c);
	
	printf("enter value of d\n");
	scanf("%d",&d);
	
	if(a < b && a < c && a < d)
	{
		printf("a is the smallest number");
	}
	
	if(b < a  && b < c && b < d)
	{
		printf("b is the smallest number");
	}
	
	if(c < a  && c < b && c < d)
	{
		printf("c is the smallest number");
	}
	
	if(d < a && d < b && d < c)
	{
		printf("d is the smallest number");
	}
}
