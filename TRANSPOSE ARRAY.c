//NAME : HAFSA NASIR
//ROLL NO : CT-068

#include<stdio.h>
int main(void)
{
	int n;
	int is_symmetric = 1 ; //suppose k symmetric hai
	printf("Enter number of rows and columns : ");
	scanf("%d",&n);
	
	int a[n][n];
	
	printf("Enter elements\n");
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0; j < n ; j++)
		{
			scanf("%d",&a[i][j]);
			
		}
		
	}

	
	int i , j;

    printf("its transpose is \n");
	for(int i = 0 ; i < n ; i++)
	{
		for( j = 0; j < n; j++)
		{
			
			printf("%d",a[j][i]);
			
			
		}
		printf("\n");
	}
	
	//symmetric check
	
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0; j < n ; j++)
		{
			if(a[i][j] != a[j][i])
			{
				 is_symmetric = 0;
				break;
			}
		}
	}
	
	if(is_symmetric == 1)
	{
		printf("It is symmetric\n");
	}
	else{
		printf("It is not symmetric\n");
	}
			
   return 0;
			  }

