#include<stdio.h>
#include<string.h>
int main(void)
{
	//WAP to store roll no and marks obtained by 4 students side
	
//	int arr[4][2];
//	printf("Enter marks and roll : \n");
//	
//	for(int i = 0 ; i < 4 ; i++)
//	{
//		for(int j = 0; j < 2 ; j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//
//	printf("roll no   :  marks \n");
//	
//	for(int i = 0 ; i < 4 ; i++)
//	{
//		for(int j = 0; j < 2 ; j++)
//		{
//			printf("%d\t\t",arr[i][j]);
//		}
//		printf("\n");
//	}


//--------------------------------------------------------------------

//to store 10 at every index of a 2d matrix

//int arr[5][5];
//
//for(int i = 0 ; i < 5 ; i++)
//{
//	for(int j = 0; j < 5 ; j++)
//	{
//		arr[i][j] = 10;
//		printf("%d ",arr[i][j]);
//	}
//	printf("\n");
//}

//-----------------------------------------------------------------------

//to add 2 matrices

//int r1 = 3 , c1 = 3; 
//int r2 = 3 , c2 = 3; 
//
//int a[r1][c1];
//int b[r2][c2];
//
//printf("enter elements of matrix 1 \n");
//
//for(int i = 0 ; i < r1 ; i++)
//{
//	for(int j = 0; j < c1 ; j++)
//	{
//		scanf("%d",&a[i][j]);
//	}
//}
//
//
//printf("enter elements of matrix 2 \n");
//
//for(int i = 0 ; i < r2 ; i++)
//{
//	for(int j = 0; j < c2 ; j++)
//	{
//		scanf("%d",&b[i][j]);
//	}
//	
//}
//
//int res[r1][c2];
//
//printf("addition is \n");
//for(int i = 0; i < r1; i++)
//{
//	for(int j = 0; j < c2 ; j++)
//	{
//		res[i][j] = a[i][j] + b[i][j];
//		printf("%d ",res[i][j]);
//	}
//	printf("\n");
//}

//--------------------------------------------------------------------

//find the sum of elements in a 2d array
//int r , c;
//
//printf("enter no of rows and  col : ");
//scanf("%d %d",&r,&c);
//
//int a[r][c];
//
//for(int i = 0; i < r; i++)
//{
//	for(int j = 0; j < c; j++)
//	{
//		scanf("%d",&a[i][j]);
//	}
//}
//
//
//for(int i = 0; i < r; i++)
//{
//	for(int j = 0; j < c; j++)
//	{
//		printf("%d",a[i][j]);
//	}
//	printf("\n");
//}
// 
// int sum = 0;
// for(int i = 0; i < r; i++)
// {
// 	for(int j = 0; j < c; j++)
// 	{
// 		sum = sum + a[i][j];
//	 }
// }
// 
// printf("sum of elements is %d",sum);

//--------------------------------------------------------------------

//max element 

//int r , c;
//
//printf("enter no of rows and  col : ");
//scanf("%d %d",&r,&c);
//
//int a[r][c];
//
//for(int i = 0; i < r; i++)
//{
//	for(int j = 0; j < c; j++)
//	{
//		scanf("%d",&a[i][j]);
//	}
//}
//
//
//for(int i = 0; i < r; i++)
//{
//	for(int j = 0; j < c; j++)
//	{
//		printf("%d ",a[i][j]);
//	}
//	printf("\n");
//}
//
//int max = -1;
//
//for(int i =0; i < r; i++)
//{
//	for(int j = 0; j < c; j++)
//	{
//		if(a[i][j] > max)
//		{
//			max = a[i][j];
//		}
//	}
//}
//
//printf("max is : %d ",max);


//-------------------------------------------------------------

//min value

//int r , c;
//
//printf("enter no of rows and  col : ");
//scanf("%d %d",&r,&c);
//
//int a[r][c];
//
//for(int i = 0; i < r; i++)
//{
//	for(int j = 0; j < c; j++)
//	{
//		scanf("%d",&a[i][j]);
//	}
//}
//
//
//for(int i = 0; i < r; i++)
//{
//	for(int j = 0; j < c; j++)
//	{
//		printf("%d ",a[i][j]);
//	}
//	printf("\n");
//}
//
//int min= a[0][0];
//
//for(int i =0; i < r; i++)
//{
//	for(int j = 0; j < c; j++)
//	{
//		if(a[i][j] < min)
//		{
//			min = a[i][j];
//		}
//	}
//}
//
//printf("min is : %d ",min);

//----------------------------------------------------------

//max sum row

//int r , c;
//
//printf("enter no of rows and  col : ");
//scanf("%d %d",&r,&c);
//
//int a[r][c];
//int maxsum = -1;
//for(int i = 0; i < r; i++)
//{
//	for(int j = 0; j < c; j++)
//	{
//		scanf("%d",&a[i][j]);
//	}
//}
//
//
//for(int i = 0; i < r; i++)
//{
//	int sum = 0;
//	for(int j = 0; j < c; j++)
//	{
//		sum = sum + a[i][j];
//		
//	}
//	printf("sum of row %d is %d\n",i,sum);
//	
//	if(sum > maxsum)
//    {
//        maxsum = sum;
//    }
//
//}
//
//printf("max sum is : %d",maxsum);
	
	
	//----------------------------------------------------------
	
	//find row with max num if 1s
	
//	int a[3][3];
//	
//		int maxcount = -1;
//		
//		
//	
//	printf("enter elements with 0s and 1s\n");
//	
//	for(int i = 0 ; i < 3 ; i++)
//	{
//		for(int j = 0; j < 3; j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	
//	for(int i = 0; i < 3; i++)
//	{
//		int count = 0;
//		int rowindex = 0;
//		
//		for(int j = 0; j < 3; j++)
//		{
//			if(a[i][j] == 1)
//			{
//				count++;
//				
//			}
//			if(count > maxcount)
//			{
//				maxcount = count;
//				
//				
//			}
//		}
//		
//	}
//	
//	 printf("max num of 1 in row  : %d",maxcount);
//
//------------------------------------------------------------------

//int r , c;
//printf("enter number of rows and col : ");
//scanf("%d %d",&r , &c);
//
//int a[r][c];
//
//for(int i = 0; i < r; i++)
//{
//	for(int j = 0; j < c;j++)
//	{
//		scanf("%d",&a[i][j]);
//	}
//}
//
//printf("transpose is \n");
//
//for(int i = 0; i < r; i++)
//{
//	for(int j = 0; j < c;j++)
//	{
//		printf("%d",a[j][i]);
//	}
//	printf("\n");
//}


//------------------------------------------------------------

//to print the tranpose of nxn by swapping

//int r  ,c ;
//printf("enter num of rows and col : ");
//scanf("%d %d",&r , &c);
//int a[r][c];
//
//
//for(int i = 0; i < r; i++)
//{
//	for(int j = i; j < c; j++)
//	{
//		scanf("%d",&a[i][j]);
//	}
//}
//
////transpose
//
//for(int i =0; i < r; i++)
//{
//	for(int j = 0; j < c; j++)
//	{
//		int temp = a[i][j];
//		a[i][j]  = a[j][i];
//		a[j][i] = temp;
//	}
//}
//
//
////output
//
//for(int i = 0 ; i < r; i++)
//{
//	for(int j = 0;  j < c; j++)
//	{
//		printf("%d ",a[i][j]);
//	}
//	printf("\n");
//}


//---------------------------------------------------------

//multiplication table

int r1  , c1;
printf("enter num of rows of matrix 1 : ");
scanf("%d",&r1);

printf("enter num of col of matrix 1 : ");
scanf("%d",&c1);

int a[r1][c1];

printf("enter elements of matrix 1 \n");

for(int i = 0; i < r1; i++)
{
	for(int j = 0; j < c1 ; j++)
	{
		scanf("%d",&a[i][j]);
	}
}


int r2  , c2;
printf("enter num of rows of matrix 2 : ");
scanf("%d",&r2);

printf("enter num of col of matrix 2 : ");
scanf("%d",&c2);

int b[r2][c2];

printf("enter elements of matrix 1 \n");

for(int i = 0; i < r2; i++)
{
	for(int j = 0; j < c2 ; j++)
	{
		scanf("%d",&b[i][j]);
	}
}

int c[r1][c2];

//initialize c to 0;

for(int i = 0; i < r1 ; i++)
{
	for(int j = 0; j < c2 ; j++)
	{
		c[i][j] = 0;
	}
}




//multiplying

for(int i = 0; i < r1 ; i++)
{
	for(int j = 0; j < c2 ; j++)
	{
		for(int k = 0; k < r2 ; k++)
		{
			c[i][j] = c[i][j] + a[i][k] * b[k][j];
		}
	}
}


//printing

for(int i = 0; i < r1 ; i++)
{
	for(int j = 0 ; j < c2 ; j++)
	{
		printf("%d ",c[i][j]);
	}
	
	printf("\n");
}
 
 
   return 0;
			  }

