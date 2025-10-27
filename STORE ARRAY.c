//NAME : HAFSA NASIR
//ROLL NO : CT-068

#include<stdio.h>
int main(void)
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	int a[n];
	for(int i = 0 ; i < n ; i++)
	{
	  scanf("%d",&a[i]);
	}
	
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0)
		{
			sum = sum + a[i];
		
		}
	}
	   printf("The sum of all positive number is : ");
		printf("%d\n",sum);
		float avg;
		avg  = sum / n;
		
		printf("The average is : ");
		printf("%f\n",avg);
	
	
	
   return 0;
			  }

