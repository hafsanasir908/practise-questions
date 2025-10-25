#include<stdio.h>
int main(void)
{
	//input and print all elements
	
//	int a[5];
//	printf("enter elements\n");
//	for(int i = 0 ; i < 5 ; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	//printing
//	
//	for(int i = 0 ; i < 5 ; i++)
//	{
//		printf("%d",a[i]);
//	}

//***************************************************
	
	//sum of all elements in an array
	
//	int a[5];
//	int sum = 0;
//	printf("enter elements\n");
//	for(int i = 0 ; i < 5 ; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	//printing
//	
//	for(int i = 0 ; i < 5 ; i++)
//	{
//		sum = sum + a[i];
//		
//	}
//	printf("%d",sum);


//********************************************************************

   //max value
   
//   int a[10];
//   printf("enter elements\n");
//   for(int i = 0 ; i < 9 ; i++)
//   {
//   	scanf("%d",&a[i]);
//   }
//   
//   int max = -1;
//   for(int i = 0 ; i < 9 ; i++)
//   {
//   	if(max < a[i])
//   	{
//   		max = a[i];
//	   }
//   }
//    printf("max value is : %d",max);

//*****************************************************************

//second max;

//   int a[10];
//   printf("enter elements\n");
//   for(int i = 0 ; i < 9 ; i++)
//   {
//   	scanf("%d",&a[i]);
//   }
//   
//   int max = -1;
//   for(int i = 0 ; i < 10 ; i++)
//   {
//   	if(max < a[i])
//   	{
//   		max = a[i];
//	   }
//   }
//   
//   int smax = a[0];
//   for(int j = 1; j < 10 ; j++)
//   {
//   	
//   	if(a[j] > smax && a[j] < max)
//   	{
//   		smax = a[j];
//	   }
//   }
//    printf("smax value is : %d",smax);
//   ****************************************************************

//count even num

//   int a[10];
//   int count = 0;
//   for(int i = 0; i < 10; i++)
//   {
//   	scanf("%d",&a[i]);
//	      
//		  }
//		  
//		  int max = a[0];
//		 for(int i =0; i < 10; i++)
//		 {
//		 	if(a[i] % 2 == 0)
//		 	{
//		 		count++;
//			 }
//		  } 
//		  printf("total num of even num is : %d",count);

//******************************************************************

//to search for a specific element
   
//    int a[10] = {1,2,3,4,5,6,7,8,9,10};
//    int x = 4;
//    
//    for(int i = 0; i < 10 ; i++)
//    {
//    	if(a[i] == x)
//    	{
//    		printf("%d is present in the array and its index is %d",a[i],i);
//    		break;
//		}
//	}
 //*****************************************************************************
 
 //min value
 
// int a[10];
// printf("enter elements");
// for(int i = 0; i < 10 ; i++)
// {
// 	scanf("%d",&a[i]);
// }
// 
// int min = a[0];
// for(int i = 0; i < 10; i++)
// {
// 	if(a[i] < min)
// 	{
// 		min = a[i];
//	 }
// }
// 
// printf("min value is : %d",min);

//*******************************************************************************

//to find avg

//   int a[10];
//    printf("enter elements\n");
// for(int i = 0; i < 10 ; i++)
// {
// 	scanf("%d",&a[i]);
// }
// 
// int sum = 0;
// float avg;
// 
// for(int i = 0 ; i < 10 ; i++)
// {
// 	sum = sum + a[i];
// }
//   avg = sum / 10;
//   printf("sum is : %d\n",sum);
//   printf("avg is : %f",avg);

//***************************************************************

 //reverse
// int a[10] = {1,2,3,4,5,6,7,8,9,10};
//  printf("enter elements");
// for(int i = 0; i < 10 ; i++)
// {
// 	scanf("%d",&a[i]);
// }
// 
// for(int i = 9; i >=  0; i--)
// {
// 	printf("%d ",a[i]);
// }
 
 
 //********************************************************************
 
 //palindrome
//    int n;
// 	int palindrome = 1;
// 	printf("enter num of elements\n");
// 	scanf("%d",&n);
// 	int a[n];
// 	printf("enter elements\n");
// 	for(int i  = 0 ; i < n ; i++)
// 	{
// 		scanf("%d",&a[i]);
//	 }
//	 
//	 int i = 0;
//	int j = n - 1;
//	 
//	 while(i < j)
//	 {
//	 	if(a[i] != a[j]){
//	 		palindrome = 0;
//	 		break;
//		 }
//		 
//		 i++;
//		 j--;
//			 }
//			 if(palindrome == 1)
//			 {
//			 	printf("it is a palindrome\n");
//			 }
//			 else{
//			 	printf("it is not a palindrome\n");
//			 }
// ******************************************************************

//count pairs

//  int a[10] = {1,2,3,4,5,6,7,8,9,10};
//  int x = 12;
//  int count = 0;
//  
//  for(int i = 0 ; i < 10 ; i++)
//  {
//  	for(int j = i + 1 ; j < 10 ; j++)
//  	{
//  		if(a[i] + a[j] == x)
//  		{
//  			count++;
//  			printf("pair found (%d , %d)\n",a[i],a[j]);
//		  }
//		  if(i == j)
//	  {
//	  	continue;
//	  }
//	  }
//	  
//	  
//	  
//  }
//  printf("total pairs are : %d",count);
  
  //****************************************************************
  
  //count triplets
  
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int x = 12;
  int count = 0;
  
  for(int i = 0 ; i < 10 ; i++)
  {
  	for(int j = i + 1 ; j < 10 ; j++)
  	{
  		for(int k = j +1 ; k < 10 ; k++)
  		{
  			if(a[i] + a[j] + a[k] == x)
  			{
  				printf("triplet found (%d,%d,%d)\n",a[i],a[j],a[k]);
  				count++;
			  }
			  if(i == j == k)
			  {
			  	break;
			  }
		  }
  	}
	  }
 
    printf("triplets are : %d",count);
 
	
   return 0;
			  }
 
