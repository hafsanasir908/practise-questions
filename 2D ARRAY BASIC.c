#include<stdio.h>
int main(void)
{
	//2D array
	
	//datatype array_name[r][c]  r = row , c = coloumn
	
	int arr[2][2];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[1][0] = 3;
	arr[1][1] = 4;
	
	//kuch aisa ban gaya hai array
//	1 2
//	3 4

  //another mwthod to declare a 2d array
  
  int brr[2][2] = {{1,2},{3,4}};
  
  //how to print
  
  int row = 2 , col = 2;
  
  for(int i = 0 ; i < row ; i++)
  {
  	for(int j = 0 ; j < col ; j++)
  	{
  		printf("%d ",brr[i][j]);
	  }
	  printf("\n");
  }
  
   
  
  //matrix 3 x 3
  
  int a[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
  
  int r = 3 , c = 3;
  
  for(int i = 0 ; i < r ; i++)
  {
  	for(int j = 0 ; j < c ; j++)
  	{
  		printf("%d ",a[i][j]);
	  }
	  printf("\n");
  }
  
	
	
}
