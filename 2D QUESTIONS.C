#include<stdio.h>
int main()
{
	
	//write a program to store and print roll no and marks of 4 students
//	int a[4][2];
//	
//	int r = 4 , c = 2;
//	
//	for(int i = 0; i < r; i++ )
//	{
//		for(int j = 0; j < c; j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//	 
//	 printf("rollno : marks\n");
//	for(int i = 0; i < r; i++ )
//	{
//		for(int j = 0; j < c; j++)
//		{
//		   printf("%d\t ",a[i][j]);
//		}
//		printf("\n");
//	}

//**************************question 2***************************

//to add two matrices

//  int a[2][2] = {1,2,3,4};
//  int b[2][2] = {5,6,7,8};
//  
//  int res[2][2];
//  
//  for(int i = 0 ; i < 2 ; i++)
//  {
//  	for(int j = 0 ; j < 2 ; j++)
//  	{
//  		res[i][j] = a[i][j] + b[i][j];
//  		printf("%d\t",res[i][j]);
//	  }
//	    printf("\n");
//  }
	//same just by taking input
	
//	int a[2][2];
//	printf("enter elements of first matrix\n");
//	for(int i = 0 ; i < 2 ; i++)
//	{
//		for(int j = 0; j < 2 ; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	
//		int b[2][2];
//	printf("enter elements of second matrix\n");
//	for(int i = 0 ; i < 2 ; i++)
//	{
//		for(int j = 0; j < 2 ; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	
//	
//	int res[2][2]; 
//  for(int i = 0 ; i < 2 ; i++)
//  {
//  	for(int j = 0 ; j < 2 ; j++)
//  	{
//  		res[i][j] = a[i][j] + b[i][j];
//  		printf("%d\t",res[i][j]);
//	  }
//	    printf("\n");
//  }

//***************question 3*************************

//sum of given matrix of n x m --> n = rows , m = col
//mtlb pehle r or c input lo phr matrix mi jitne bhi elements hain unhe add krdo

//  
//   int n;
//   int m;
//   int sum = 0;
//   
//   
//   printf("Enter number of rows : ");
//   scanf("%d",&n);
//   
//   printf("Enter number of coloumns : ");
//   scanf("%d",&m);
//   
//   
//   int a[n][m];
//   
//   for(int i = 0 ; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	
//	for(int i = 0 ; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			printf("%d",a[i][j]);
//		}
//		printf("\n");
//	}
//	
//	for(int i = 0 ; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			sum += a[i][j];
//		}
//	}
//	
//	printf("the sum of given matrix is : %d",sum);
//	
//   

//********************************question 4********************************

  //max vlue in a 2d array
  
//  int a[3][3] = {{1,2,3},{4,15,6},{7,8,9}};
//  
//  int max = -1;
//  
//  for(int i = 0 ; i < 3; i++)
//  {
//  	for(int j = 0 ; j < 3 ; j++)
//  	{
//  		if(max < a[i][j])
//  		{
//  			max = a[i][j];
//		  }
//	  }
//	}  
//	
//	printf("max value is : %d",max);
	
	//same by taking input
	
//	 int a[3][3];
//    int max = -1;
//    
//    for(int i = 0 ; i < 3 ; i++)
//    {
//    	for(int j = 0; j < 3 ; j++)
//    	{
//    		scanf("%d",&a[i][j]);
//		}
//	}
//	
//	for(int i = 0 ; i < 3 ; i++)
//    {
//    	for(int j = 0; j < 3 ; j++)
//    	{
//    		printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//  
//    for(int i = 0 ; i < 3; i++)
//   {
//  	for(int j = 0 ; j < 3 ; j++)
//  	{
//  		if(max < a[i][j])
//  		{
//  			max = a[i][j];
//		  }
//	  }
//	}
//	
//	printf("max is %d",max);  
	
	//*************************question 5*********************
	
	//min value
	
//	  int a[3][3] = {{4,2,3},{4,15,6},{7,8,9}};
//  
//  int min = a[0][0];
//  
//  for(int i = 0 ; i < 3; i++)
//  {
//  	for(int j = 0 ; j < 3 ; j++)
//  	{
//  		if(min  > a[i][j])
//  		{
//  			min = a[i][j];
//		  }
//	  }
//	}  
//	
//	printf("min value is : %d",min);
//	

//*******************************question 6********************************************

//transpose

//  int a[3][3];
//  
//  for(int i = 0; i < 3 ; i++)
//  {
//  	for(int j = 0 ; j < 3 ; j++)
//  	{
//  		scanf("%d",&a[i][j]);
//	  }
//  }
//  
//  for(int i = 0; i < 3 ; i++)
//  {
//  	for(int j = 0 ; j < 3 ; j++)
//  	{
//  		printf("%d ",a[i][j]);
//	  }
//	  printf("\n");
//  }
//  
//  printf("its transpose is \n");
//  
//  for(int i = 0; i < 3 ; i++)
//  {
//  	for(int j = 0 ; j < 3 ; j++)
//  	{
//  		printf("%d ",a[j][i]);
//	  }
//	  printf("\n");
//  }
  
 //**************same by taking num of rows and col input****************
 
 
//     int r , c;
//     
//     printf("enter num of rows : ");
//     scanf("%d",&r);
//     
//     printf("enter num of coloumns: ");
//     scanf("%d",&c);
//     
//     int a[r][c];
//  
//  for(int i = 0; i < r ; i++)
//  {
//  	for(int j = 0 ; j < c ; j++)
//  	{
//  		scanf("%d",&a[i][j]);
//	  }
//  }
//  
//  for(int i = 0; i < r ; i++)
//  {
//  	for(int j = 0 ; j < c ; j++)
//  	{
//  		printf("%d ",a[i][j]);
//	  }
//	  printf("\n");
//  }
//  
//  printf("its transpose is \n");
//  
//  for(int i = 0; i < c; i++)
//  {
//  	for(int j = 0 ; j < r ; j++)
//  	{
//  		printf("%d ",a[j][i]);
//	  }
//	  printf("\n");
//  }


   //************************question 7*************************
   
   //to print transpose entered by user and store it in another matrix
   
//        int r , c;
//     
//     printf("enter num of rows : ");
//     scanf("%d",&r);
//     
//     printf("enter num of coloumns: ");
//     scanf("%d",&c);
//     
//     int a[r][c];
//     
//     int b[c][r];
//  
//  for(int i = 0; i < r ; i++)
//  {
//  	for(int j = 0 ; j < c ; j++)
//  	{
//  		scanf("%d",&a[i][j]);
//	  }
//  }
//  
//  for(int i = 0; i < r ; i++)
//  {
//  	for(int j = 0 ; j < c ; j++)
//  	{
//  		printf("%d ",a[i][j]);
//	  }
//	  printf("\n");
//  }
//  
//  printf("its transpose is \n");
//  
//  for(int i = 0; i < c; i++)
//  {
//  	for(int j = 0 ; j < r ; j++)
//  	{
// 		printf("%d ",a[j][i]);
//            
//            b[i][j] = a[j][i];
//            printf("%d",b[i][j]);
//	  }
//	  printf("\n");
//  }

 //**************************question 8***********************
 
 //to change the square matrix to its transpose by swapping
 
//    int n;
//    printf("enter num of rows and coloumns : "); //square matrix = same row coloumn to sirf ek hi df le lia dhino
//    scanf("%d",&n);
//    
//    int a[n][n];
//    
//    //input
//    for(int i = 0 ; i < n ; i++)
//    {
//    	for(int j = 0 ; j < n ; j++)
//    	{
//    		scanf("%d",&a[i][j]);
//		}
//		
//		
//	}
// 
// 
//    //transpose
//    for(int i = 0 ; i < n ; i++)
//    {
//    	for(int j = i ; j < n ; j++)
//    	{
//    		int temp = a[i][j];
//    		a[i][j] = a[j][i];
//    		a[j][i] = temp;
//		}
//	}
//		
//		//output
//		
//		 for(int i = 0 ; i < n ; i++)
//    {
//    	for(int j = 0 ; j < n ; j++)
//    	{
//    		printf("%d",a[i][j]);
//		}
//		
//		printf("\n");
//	
//	}
	
	//********************question 9*****************
	
	//rotate a matrix by 90 degree
	
	//stepes
	//1. transpose
	//2. reverse every row
	
	
//	 int n;
//    printf("enter num of rows and coloumns : "); //square matrix = same row coloumn to sirf ek hi df le lia dhino
//    scanf("%d",&n);
//    
//    int a[n][n];
//    
//    //input
//    for(int i = 0 ; i < n ; i++)
//    {
//    	for(int j = 0 ; j < n ; j++)
//    	{
//    		scanf("%d",&a[i][j]);
//		}
//		
//		
//	}
// 
// 
//    //transpose
//    for(int i = 0 ; i < n ; i++)
//    {
//    	for(int j = i ; j < n ; j++)
//    	{
//    		int temp = a[i][j];
//    		a[i][j] = a[j][i];
//    		a[j][i] = temp;
//		}
//	}
//	
//	//reverse
//		for(int i = 0 ; i < n ; i++)
//		{
//			int j = 0;
//			int k = n - 1;
//			while(j < k)
//			{
//				//swap a[i][j] and a[j][k]
//			int temp = a[i][j];
//    		a[i][j] = a[i][k];
//    		a[i][k] = temp;
//    		j++;
//    		k--;
//							}
//		}
//		//output
//		
//		printf("\n");
//		 for(int i = 0 ; i < n ; i++)
//    {
//    	for(int j = 0 ; j < n ; j++)
//    	{
//    		printf("%d",a[i][j]);
//		}
//		
//		printf("\n");
//	
//	}

    //*******************************question 10*********************
    
    //**********************multiplication table***********************
    
    //rules
    
    //a[m][n] x b[p][q] = res[m][q]--> do do alag alag matrix hain
    
    //1. n == p ( n should be == p , if not we can not multiply) (pehle ka col dosre ka row)
    //2. resultant order is m x q
    
//    int a[2][3] = {{1,2,3},{4,5,6}};
//    int b[3][2] = {{7,8},{9,10},{11,12}};
//    
//    int c[2][2];
//    
//    //initialize c to 0
//    
//    for(int i = 0 ; i < 2 ; i++)
//    {
//    	for(int j = 0 ; j < 2 ; j++)
//    	{
//    		c[i][j] = 0;
//		}
//	}
//    
//    
//    //multiplying
//    
//    for(int i = 0 ; i < 2 ; i++)
//    {
//    	for(int j = 0; j < 2 ; j++)
//    	{
//    		for(int k = 0 ; k < 3 ; k++)
//    		{
//    			c[i][j] = c[i][j] + a[i][k] * b[k][j];
//			}
//		}
//	}
//	
//	//print
//	
//	for(int i = 0 ; i < 2 ; i++)
//	{
//		for(int j = 0 ; j < 2 ; j++)
//		{
//			printf("%d\t",c[i][j]);
//		}
//		printf("\n");
//	}
	
	//by user input
	int r1 , c1 , r2 , c2 , i , j , k;

	printf("enter rows of matrix 1 : ");
	scanf("%d",&r1);
	
	printf("enter columns of matrix 1 : ");
	scanf("%d",&c1);
	
	printf("enter elemets of matrix 1\n");
	
	int a[r1][c1];
	
	for(int i = 0 ; i < r1 ; i++)
	{
		for(int j = 0; j < c1 ; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter rows of matrix 2 : ");
	scanf("%d",&r2);
	
	printf("enter col of matrix 2: ");
	scanf("%d",&c2);
	
	printf("enter elements of matrix 2\n");
	
	int b[r2][c2];
	
    for(int i = 0; i < r2 ; i++)
    {
    	for(int j = 0; j < c2 ; j++)
    	{
    		scanf("%d",&b[i][j]);
					}
	}
	
	
	
	
	
    //initialize c to 0
    
    int c[r1][c2];
    
    for(int i = 0 ; i < r1 ; i++)
    {
    	for(int j = 0 ; j < c2 ; j++)
    	{
    		c[i][j] = 0;
		}
	}
	
	//multiplying
	
	for(int i = 0 ; i < r1 ; i++)
	{
		for(int j = 0 ; j < c2 ; j++)
		{
			for(int k = 0 ; k < c1 ; k++)
			{
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}
	
  //printing
  
  for(int i = 0 ; i < r1 ; i++)
  {
  	for(int j = 0 ; j < c2 ; j++)
  	{
  		printf("%d ",c[i][j]);
	  }
	  printf("\n");
  }
    
    
    
    
	
	
	
 
    

   
   
  



	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
