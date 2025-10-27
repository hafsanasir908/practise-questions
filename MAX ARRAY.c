//NAME : HAFSA NASIR
//ROLL NO : CT-068

#include<stdio.h>
int main(void)
{
	int r , c;
	
	printf("Enter number of rows : ");
	scanf("%d",&r);
	
	printf("Enter number of columns: ");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("Enter elements\n");
	for(int i = 0 ; i < r ; i++)
	{
		for(int j = 0; j < c ; j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	
	printf("The matrix is \n");
	for(int i = 0 ; i < r ; i++)
	{
		for(int j = 0; j < c ; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	
	
	int max = -1;
	for(int i = 0 ; i < r ; i++)
	{
		for(int j = 0 ; j < c ; j++)
		{
			if(max < a[i][j])
			max = a[i][j];
				}
	}
	
	printf("maximum value is : %d",max);
   return 0;
			  }

