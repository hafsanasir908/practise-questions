#include<stdio.h>
int main(void)
{
//	//sumof digits
//	int n , sum = 0;
//	printf("enter a number\n");
//	scanf("%d",&n);
//	
//	for(; n > 0; n = n /10){
//	
//	//to extract last digit
//	int last_digit;
//	last_digit = n % 10;
//	sum = sum + last_digit;
//	
//	 }
//	 printf("sum of all digits is : %d",sum);

     
      //****************************************
      
      //factorial of a given number
      
//      int fact = 1 ,num;
//      
//      printf("enter number to find factorial");
//      scanf("%d",&num);
//      
//      for(int i = 1; i<= num ;i++)
//      {
//      	fact = fact * i;
//	  }
//	  
//	  printf("%d",fact);
//      

 //*********************************************************
 
 //multiplication table
 
//       int n;
//       printf("entern\n");
//       scanf("%d",&n);
//       
//       for(int i = 1; i<= 10; i++)
//       {
//       	  printf("%d * %d = %d\n",n,i,n*i);
//	   }

    //*********************************************************************
      
      
      //print prime numbersfrom 1 to 10
      
//      for (int n = 1; n <= 10 ; n++)
//      {
//      	int count = 0;
//      	
//      	for(int i = 1 ; i <=n; i++)
//      	{
//      		if(n % i == 0)
//      		{
//      			count++;
//      			
//			  }
//			  
//		  }
//		  if(count == 2)
//			  {
//			  	printf("%d",n);
//			  }
//		  
//	  }

      //***************************************************
      // prime numbers from 1 to n
      
//      int n;
//      
//      printf("enter n\n");
//      scanf("%d",&n);
//      
//      for(int num = 1 ; num<= n ;num++)
//      {
//	  int count = 0;
//      	for(int i = 1; i<=num; i++ )
//      	{
//      		if(num % i == 0)
//      		{
//      			count++;
//			  }
//		  }
//		  
//		  if(count == 2)
//		  {
//		  	printf("%d\n",num);
//		  }
//	  }
//    
// 
// *********************************************************

  //fibonacci series from 1 to 100
  
    
//     int a = 0,b = 1, result;
//     for(int i = 0; i <= 10 ; i++)
//     {
//     	printf("%d ",a);
//     	result = a + b;
//     	a = b;
//     	b = result;
//     	
//	 }

//*************************************************************
//sum of series from 1 to n

     int n , sum = 0;;
     printf("enter number\n");
     scanf("%d",&n);
     
     for(int i = 1; i<= n; i++)
     {
     	
     	sum = sum +i;
    
	 }

	 
	  printf("%d",sum);
  
  
	
	}
