//NAME : HAFSA NASIR
//ROLL NO : CT-068

#include<stdio.h>
int main(void)
{
	int m , n;
	printf("Enter number of rows\n");
	scanf("%d",&m);
	
	printf("Enter number of columns\n");
	scanf("%d",&n);
	
	int a[m][n];
	printf("Enter elements\n");
	for(int i = 0 ; i < m ; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}
	
	
	int total = 0;
	for(int i = 0 ;  i< m ; i++)
	{
		for(int j = 0; j < n ; j++)
		{
			if(a[i][j] == 0)
			{
				total++;
				
			}
		}
	
	}
	
	if(total >= (m*n)/2)
	{
		printf("it is a sparse matrix\n");
	}
	else
	{
		printf("it is not a sparse matrix\n");
	}
	
	
	
   return 0;
			  }

