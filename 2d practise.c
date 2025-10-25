#include<stdio.h>
int main(void)
{
	//input and prin 2d array
//	int r , c;
//	printf("enter num of rows and col : ");
//	scanf("%d %d",&r , &c);
//	int a[r][c];
//	printf("enter elements\n");
//	for(int i = 0 ; i < r ;  i++)
//	{
//		for(int j = 0 ; j < c ; j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	
//	for(int i = 0 ; i < r ;  i++)
//	{
//		for(int j = 0 ; j < c ; j++)
//		{
//			printf("%d",a[i][j]);
//		}
//		printf("\n");
//	}
	
	//*******************************************************************
	
	//sum of all elements
	
//		int r , c;
//		int sum = 0;
//	printf("enter num of rows and col : ");
//	scanf("%d %d",&r , &c);
//	int a[r][c];
//	printf("enter elements\n");
//	for(int i = 0 ; i < r ;  i++)
//	{
//		for(int j = 0 ; j < c ; j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	
//	for(int i = 0 ; i < r ;  i++)
//	{
//		for(int j = 0 ; j < c ; j++)
//		{
//			printf("%d",a[i][j]);
//			sum = sum  + a[i][j];
//			 
//		}
//		printf("\n");
//	}
//	
//	printf("sum of all element is : %d",sum);

//***********************************************************************

//sum of a specific roe
//
//   int a[2][3] = {{1,2,3} , {4,5,6}};
//   
//   int row;
//   printf("konsi row ka sum chahiye?\n");
//   scanf("%d",&row);
//   
//  int sum = 0;
//  
//  
//  	for(int j = 0 ; j < 3  ; j++)
//  	{
//  		sum = sum + a[row][j];
//  		
//	  }
//  
//  printf("%d",sum);
//	

//*************************************************

//sum of a specific column

   
//   int a[2][3] = {{1,2,3} , {4,5,6}};
//   
//   int col;
//   printf("konse col ka sum chahiye? (0-2)\n");
//   scanf("%d",&col);
//   
//  int sum = 0;
//  
//  
//  	for(int i = 0 ; i < 2 ;  i++)
//  	{
//  		sum = sum + a[i][col];
//  		
//	  }
//  
//  printf("%d",sum);

//****************************************************************


//to print diagnol elements only

//  int a[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
//  
//  for(int i = 0 ; i < 3 ; i++)
//  {
//  	for(int j = 0 ; j < 3 ; j++)
//  	{
//  		if(i == j)
//  		{
//  			printf("%d ",a[i][j]);
//		  }
//	  }
//  }
//**********************************************************************

   //total num of odd num
   
//   int a[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
//   int count = 0;
//   
//   for(int i = 0 ; i < 3 ; i++)
//   {
//   	for(int j = 0 ; j <3 ; j++)
//   	{
//   		if(a[i][j] % 2 != 0)
//   		{
//   			count++;
//		   }
//	   }
//   }
//   
//   printf("total num of odd num is : %d",count);


//****************************************************************

//max value

//      int a[3][3] = {{1,2,3} , {42,5,6} , {7,18,9}};
// 
//     int max = -1;
// 
//      for(int i = 0 ; i < 3 ; i++)
//     {
//    	for(int j = 0 ; j <3 ; j++)
//    	{
//    		if(max < a[i][j])
//    		max = a[i][j];
//    	}
//    	
//    }
//    printf("%d",max);

//****************************************************************

//to print only boundary elements

//********************************************************************

//transpose


//  int a[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
//  
//  for(int i = 0 ; i < 3 ; i++)
//  {
//  	for(int j = 0 ; j < 3 ; j++)
//  	{
//  	   printf("%d ",a[j][i]);	
//	  
//	  }
//	  printf("\n");
//  }

//*************************************************************************

//reverse each row

//**************************************************************************

// sum of two matrix

// int a[2][2] = { {1,2} , {4,5}};
// int b[2][2] = {{1,2},{3,4}};
// 
// 
//
// int c[2][2];
// for(int i = 0 ; i < 2 ; i++)
// {
// 	for(int j = 0 ; j < 2 ; j++)
// 	{
// 	   c[i][j] = a[i][j] + b[i][j];
// 	   printf("%d\t",c[i][j]);
//	 }
//	 printf("\n");
// }
// ********************************************************************************

//multiply two matrix

   int a[2][3] = {{1,2,3} , {4,5,6}};
   int b[3][2]= {{7,8},{9,10},{11,12}};
 
   //inititalize c to 0;
   int c[2][2];
   for(int i = 0 ; i < 2 ; i++)
   {
   	for(int j = 0 ; j < 2 ;  j++)
   	{
   		c[i][j] = 0;	   
   }
}

  //multiply
  
  for(int i = 0 ; i < 2 ; i++)
  {
  	for(int j = 0 ; j < 2 ; j++)
  	{
  		for(int k = 0 ; k < 3 ; k++)
  		{
  			c[i][j] = c[i][j] + a[i][k] * b[k][j];
		  }
	  }
  }
 
 
 //print
 
 for(int i = 0 ;  i < 2 ; i++)
 {
 	for(int j = 0; j < 2 ; j++)
 	{
 		printf("%d\t",c[i][j]);
	 }
	 printf("\n");
 }
 
	
	
  
	
   return 0;
			  }

