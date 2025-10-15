#include<stdio.h>
int main(void)
{
	//******************PATTERN 1******************
//	****
//	****
//	****
//	****

      for(int i = 1; i <= 4 ; i++)
      {
      	for(int j = 1; j <= 4 ; j++)
      	{
      		printf("*");
		  }
		  printf("\n");
	  }
	  
	  //**************pattern 2****************************
	  // jo num enter kare wahin tk print hojaye e.g n = 4
//	  1234 
//	  1234
//	  1234
//	  1234


        int n;
        printf("enter no of rows\n");
        scanf("%d",&n);
        
         for(int i = 1 ; i<= n; i++)
         {
         	for(int j = 1 ; j<= n;  j++)
         	{
         		printf("%d",j);
			 }
			 printf("\n");
		 }
		 
		 //*********************pattern 3********************
		 //*
		 //**
		 //***
		 //****
		 
		 for(int i = 1 ; i <= 4 ; i++)
		 {
		 	for(int j = 1 ;  j <= i ; j++)
		 	{
		 		printf("*");
			 }
			 printf("\n");
		 }
		 
		 //**********************pattern 4*********************
		 //****
		 //***
		 //**
		 //*
		 
		 for(int i = 1; i <= 4; i++)
		 {
		 	for(int j = 4; j >= i ; j-- )
		 	{
		 		printf("*");
			 }
			 printf("\n");
		 }
		 
		 //*************************pattern 5*********************
//		 1
//		 12
//		 123
//		 1234

          for(int i = 1 ; i <= 4 ; i++)
          {
          	for(int j = 1 ; j <= i ; j++)
          	{
          		printf("%d",j);
			  }
			  printf("\n");
		  }
		  
		  //****************************pattern 6************************
//		  
//		  1234
//		  123
//		  12
//		  1

          
		  //******************patter 7********************
		  
		  //1
		  //13
		  //135
		  //1357
		  
		  for(int i = 1; i <= 4; i++ )
		  {
		  	for(int j = 1 ; j <= i *2 -1 ; j = j + 2)
		  	{
		  		printf("%d",j);
		  		
			  }
			  printf("\n");
		  }
		  
		  //*************************EXTRA PATTERN*****************
//		  2
//		  24
//		  246
//		  2468

        for(int i = 1 ; i <= 4; i++)
        {
        	for(int j = 1 ; j <= i * 2 ; j++)
        	{
        	    ++j;
        		printf("%d",j);
        	
			}
			printf("\n");
		}
		  //*************************pattern 8***********************
//		  
//		  ABCD
//		  ABCD
//		  ABCD
//		  ABCD

        for(int i = 1 ; i <= 4 ; i++ )
        {
        	for(char j = 'A' ; j <= 'D'; j++)
        	{
        		printf("%c",j);
			}
			printf("\n");
		}
       //***********using input**************
       int num;
       printf("Enter number\n");
       scanf("%d",&num);
       
       for(int i = 0 ; i < num ; i++)
       {
       	for(int j = 0; j<  num;j++)
       	{
       		printf("%c",'A' +j);
		   }
		   printf("\n");
	   }
	   
	   //*******************************PATTERN 9*************************
	   
//	   A
//	   AB
//	   ABC
//	   ABCD

       for(int i = 0 ; i < 4 ; i++)
       {
       	for(int j = 0 ; j <= i ; j++)
       	{
       		printf("%c",'A' + j);
		   }
		   printf("\n");
	   }

    //****************************PATTERN 10**************************
    
//        *
//      * * *
//    * * * * *
//  * * * * * * *

         
         for(int i = 1 ; i<= 4 ; i++)
         {
         	for(int k = i ; k < 4 ; k++)
         	{
         		printf(" ");
			 }
			 for(int j = 1 ; j <= (2 * i - 1); j++)
			 {
			 	printf("*");
			 }
			 printf("\n");
		 }
       
       
       //***********************pattern 11*************************
//       
//       *
//       *
//   * * * * *
//       *
//       *
  for(int i = 1 ; i <= 5 ; i++)
    {
    	for(int j = 1 ; j <= 5 ; j++)
    	{
    		if(i == 3 || j ==3)
    		{
    			printf("*");
			}
			else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	
	//***************************pattern 12****************************
	
	}
			
		
		  
 

