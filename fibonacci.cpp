#include<stdio.h>
int main(void)
{
	int a , b , i, result;
	a = 0;
	b = 1;
	
//	for(int i = 1 ; i <= 10 ; i++)
//	{
//		printf("%d ",a);
//		result = a  + b;
//		a = b;
//		b = result;
//	
//	}
		
//		while(i <= 10)
//		{
//			printf("%d ",a);
//			result = a + b;
//			a = b;
//			b = result;
//			i++;
//		}

do{
	printf("%d ",a);
	result = a + b;
	a = b;
	b = result;
	i++;
}while(i <= 10);
}
