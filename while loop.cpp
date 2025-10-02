#include<stdio.h>
int main(void)
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	
	int i = 1;
	while(i <= n)
	{
		printf("%d\n",i);
		i++;
	}
}
