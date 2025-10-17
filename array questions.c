#include<stdio.h>
int main(void)
{
	//5 number input lo or usko reverse order mai print krke dikhao
	
//	int array[5];
//	
//	for(int i = 0 ; i < 5 ; i++)
//	{
//		printf("enter element number %d\n",i+1);
//		scanf("%d",&array[i]);
//	}
//	
//	for(int i = 4 ; i >= 0; i--)
//	{
//		printf("%d\n ",array[i]);
//	}
	
	//*********************question 1*****************************
	
	/*given an array of marks of 10 students , if the marks of any student is less than 
	35 print its roll num(roll no here refers to the index of array)*/
	
//	int marks[10];
//	
//	for(int i = 0 ; i < 10 ; i++)
//	{
//		printf("Enter marks of student %d\n",i+1);
//		scanf("%d",&marks[i]);
//		
//		if(marks[i] < 35)
//		{
//			printf("%d ",i); //index print krwana hai or is case mai hamara index i hai ang marks karane hote to marks[i] krte
//		}
//	}


	//*********************question 2*****************************	
	
  //*******************sum of elements***********************
  
//  int array[5];
//  int sum = 0;
//  
//  
//  for(int i = 0 ; i < 5 ; i++)
//  {
//  	printf("enter element %d\n",i+1);
//  	scanf("%d",&array[i]);
//  	
//  	sum  = sum + array[i];
//  }
//  
//  printf("%d",sum);
  
  	//*********************question 3*****************************
  	
  //**************************product of element*********************
  
//  int array[5];
//  int product = 1;
//  
//  
//  for(int i = 0 ; i < 5 ; i++)
//  {
//  	printf("enter element %d\n",i+1);
//  	scanf("%d",&array[i]);
//  	
//  	product  = product * array[i];
//  }
//  
//  printf("%d",product);
  
  
  	//*********************question 4*****************************
  //**********************maximum values out of all element******************
  
//compare karayenge mtlb max mai -1 store karenge or usse bari bari sb value se compsre krenge

//    
//     int array[5];
//  int max = -1;                                         
//  
//  
//  for(int i = 0 ; i < 5 ; i++)
//  {
//  	printf("enter element %d\n",i+1);
//  	scanf("%d",&array[i]);
//  	
//  	if(max < array[i])                                   
//  	{
//  		max = array[i];
//		                }
//		  	  
//		  	  }
// 
//	 printf("maximum value is : %d",max);     
				   
				   //dry run    
				   
				                   //e.g array is {5,6,8,9,7}
  	                              //-1 < 5 (true) --> now max = 5
  	                              //5 < 8  (true) --> now max = 8
  	                              //8 < 9  (true) --> now max = 9
  	                              //9 < 7 (false) --> max remains 9            
				   
				
	//*********************question 5*****************************
	//*********************minimum value***************
	
	//isme min mai first element of array store krwayenge phir use sb se compare krwyaegne
	//max can also be find using this method
	
//	 
//     int array[5];
//     int min;
//                                       
//  
//  
//  for(int i = 0 ; i < 5 ; i++)
//  {
//  	printf("enter element %d\n",i+1);
//  	scanf("%d",&array[i]);
//  	
//  	min = array[0];
//  	
//  	
//  	if(array[i] < min)                                   
//  	{
//  		min = array[i];
//		                }
//		  	  
//		  	  }
// 
//	 printf("minimum value is : %d",min);     
//				   

 
//***************************question 6 ******************************

 
   //given an array of integers , change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10
   
//    int array[10] = {1,2,3,4,5,6,7,8,9,10};
//    
//    for(int i = 0 ; i < 10 ; i++)
//    {
//    	if(i % 2 != 0)
//    	{
//    		array[i] = array[i] * 2;
//    		
//		}
//		else if(i % 2 == 0)
//		{
//			array[i] = array[i] + 10;
//		}
//		
//		printf("%d ",array[i]);

//*******************************question 7**************************

  // count the number of elements in given array greater than a given number x
  
//  int array[10] = {2,4,6,8,10,12,14,16,18,20};
//  
//  int x = 8;
//  
//  for(int i = 0 ; i < 10 ; i++)
//  {
//  	 if(array[i] > x)
//  	 {
//  	 	printf("%d ",array[i]);
//	   }
//  	
//   } 

//yahi question input le ke krte hain
   
//    
//     int array[10];
//     int x;
//     
//     printf("Enter value of x : ");
//     scanf("%d",&x);
//     
//     for(int i = 0 ; i < 10 ; i++)
//     {
//     	printf("Enter value of element %d : ",i+1);
//     	scanf("%d ",&array[i]);
//	 }
//     
//     for(int i = 0 ; i < 10 ; i++)
//     {
//     	if(array[i] > x )
//     	{
//     		printf("%d ",array[i]);
//		 }
//	 }

//*****************question 8*************************

//find the difference between the sum of elements at even indexes to the sum of elements at odd indexes

     
//	  int array[10] = {1,2,3,4,5,6,7,8,9,10};
//	  int Even_sum = 0 ;
//	  int Odd_sum = 0;
//	  int i;
//	  
//	  for(int i = 0 ; i < 10 ; i++)
//	  {
//	  
//	  if(i % 2 == 0)
//	  {
//	  	Even_sum = Even_sum + array[i]; //1+3+5+7+9 = 25
//	   } 
//	   
//	    if(i % 2 != 0)
//	  {
//	  	Odd_sum = Odd_sum + array[i]; //2+4+6+8+10 =  30 
//	   } 
//       }
//	   
//	   int diff;
//	   diff = Even_sum - Odd_sum;
//	   
//	   printf("the sum of even indexes is : %d\n",Even_sum);
//	   printf("the sum of odd indexes is : %d\n",Odd_sum);
//	   printf(" the differnce of even and odd sum is : %d\n",diff);

  
  //***************************question 9*****************************
  
  //find the total number of pairs in the array whose sum is equl to the given value of x
  
//  int array[10] = {1,2,3,4,5,6,7,8,9,10};
//  
//  int x = 12;
//  int count = 0;
//  
//  for(int i = 0 ; i < 10 ; i++)
//  {
//     for(int j = i + 1 ; j < 10 ; j++)
//     {
//     	if(array[i] + array[j] == x)
//     	{
//     		count++;
//     		printf("Pair found: (%d, %d)\n", array[i], array[j]);
//		 }
//		 if(i == j)
//    {
//    	continue;
//	}
//	 }
//}
//    
//     printf("total pairs are : %d",count);


//****************question 10*************************

//same question with triplets

//     int array[10] = {1,2,3,4,5,6,7,8,9,10};
//  
//  int x = 12;
//  int count = 0;
//  
//  for(int i = 0 ; i < 10 ; i++)
//  {
//     for(int j = i + 1 ; j < 10 ; j++)
//     {
//     	for(int k =  j +1 ; k < 10 ; k++)
//     	{
//     		if(array[i] + array[j] + array[k] == x)
//     		{
//     			count++;
//     			printf("triplets found : %d , %d , %d\n",array[i] , array[j] , array[k]);
//			 }
//			 if(i == j == k)
//			 {
//			 	continue;
//			 }
//		 }
//	}
//}
//    
//     printf("total pairs are : %d",count);

//***************************question 11********************************

    // 2nd largest element in an array********************************
    
//    int array[10] = {1,2,3,4,5,6,7,8,9,10};
//    int max = array[0] ;
//	int smax = array[0] ; //second max
//    
//    for(int i = 0 ; i < 10 ; i++)
//    {
//    	if(max < array[i])
//    	{
//    		max = array[i];
//		}
//	}
//	
//	for(int j = 1 ; j < 10 ; j++)
//	{
//		if(array[j]  > smax && array[j] < max){
//			smax = array[j];
//		}
//		
//	}
//  
//     printf("second largest element in an array is : %d",smax);
// 


//******************question 12***********************


//same smax question using single for loop

      int array[10] = {1,2,3,4,5,6,7,8,9,10};
      int max = array[0]; 
      int smax = array[0];
      
      for(int i = 0; i < 10 ; i++)
      {
      	
      	if(max < array[i])
        {
		
      	smax = max; // smax is now previous max
      	max = array[i]; //max is now new max
      	
      	
		   }	
	  }
	  
	  printf("second max is : %d",smax);
	  
	  //****************question 12**********************

  //to copy elements of array to another array in reverse order
  
//  int a[5] = {1,2,3,4,5};
//  int b[5];
//  
//  for(int i = 0; i < 5  ; i++)
//  {
//  	b[i] = a[4 - i];
//  }
//     for(int i = 0 ; i < 5  ; i++)
//  {
//  	printf("%d",b[i]);
//  }

//******************question 12***********************

  //to reverse an array without using an extra array
  
//  int array[10] = {1,2,3,4,5,6,7,8,9,10};  //smjh nhi arha functions se karenge
  
  
  //*****************question 13**************************
  
  //rotate the given array 'a' by k steps , where k is non negative
  
  //note : k can be greater than n as well where n is the size of array 'a'
  
  
  
  //steps
//  1. k = k % n --> agr k ki value n se bari hai to usko chota karo
//  2. reverse completely --> pure array ko reverse krdo
//  3. reverse (array , 0 , k - 1) --> means  agr k = 3 se to index 2 tk hireverse krna
//  4. reverse (array , k , n - 1) -- > means jo k hai usse leke age tk pura array reverse krdo


    int array[7] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 3;
    
    //steps
    k = k % n;
    reverse(array,0,n-1);
    reverse(array,0,k-1);
    reverse(array,k,n-1);
    
    for(int i = 0; i < 7 ; i++)
    {
    	printf("%d",array[i]);
	}
    
  
  
  
     

	

      
  
  
	
	
}
