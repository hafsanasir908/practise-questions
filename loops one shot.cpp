#include<stdio.h>
#include<math.h>
int main(void)
{
	//display this AP  1 , 3 ,5 , 7 ,9 upto n terms
	
	/*for nth term
	 Tn = a + (n - 1) * d
	 a = 1 ; d = 2 ; 
	 Tn = 2n - 1;
	 this will be our condition in for loop*/
	 
	/* int n;
	 printf("Enter number : ");
	 scanf("%d",&n);
	 
	 for(int i = 1 ; i <= 2 * n -1 ; i =  i + 2)
	 {
	 	printf("%d ",i);
	 }*/
	 
	 //*********************HOME WORK**********************
	 
	 //display this AP  4,7,10,13,16 upto n terms
	 
	 /*for nth term
	 Tn = a + (n - 1)d
	 Tn = 4 + (n - 1)* 3
	 Tn = 4 + 3n - 3
	 Tn = 3n + 1
	 */
	 
	/* int n;
	 printf("Enter number : ");
	 scanf("%d",&n);
	 
	 for(int i = 4 ; i <= 3 * n + 1; i =  i + 3)
	 {
	 	printf("%d ",i);
	 }*/
	 
	 //****************************GP********************
	 
	 //display this GP  1 ,2,4,8,16,32  upto n terms
	 
	 /*FOR NTH TERM
	 Tn = a * r power mai n - 1
	    = 1 * 2 power mai n - 1
	 Tn = 2 power mai n - 1*/
	 
	/* int n;
	 printf("Enter number : ");
	 scanf("%d",&n);
	 
	 for(int i =1 ; i <= pow(2 , n - 1); i =  i = i *2)
	 {
	 	printf("%d ",i);
	 }*/
	 
	 //**************************if a num is prime or not************************
	 
	/* int n;
	 int count ;
	 printf("Enter number : ");
	 scanf("%d",&n);
	 
	for(int i = 1 ; i <= n ; i ++)
	 {
	 	if(n % i == 0)
	 	{
	 		
	 		count++;
		 }
		
		 
	 }
	  if(count == 2)
	  {
	  	printf("the given number %d is prime ",n);
	  }
	else{
		printf("the given number %d is composite ",n);
	}*/
	
	//*************************digits ka sum and product***************
	
/*	int n ;
		int last_digit;
		int sum = 0;
		int product = 1;
	printf("Enter 4 digit number : ");
	scanf("%d",&n);
	
	
	while(n > 0)
	{
	
	//to get last digit

	last_digit = n % 10;
	
	//to sum
	
	sum = sum + last_digit;
	
	
	//to product
	
	product = product * last_digit;
	
	//to remove last digit
	n = n / 10;
	
	
	
	}
	
	int result;
	printf("sum of digits is %d\n",sum);
	printf("product of digits is %d\n",product);
	result = product - sum;
	printf("result is %d\n",result);
	
	 */
	 
	 //**************************DAY OF YEAR WALA**********************
	 
/*	 int day , month , day_of_year;
	 
	 printf("enter day of month : ");
	 scanf("%d",&day);
	 
	 printf("enter month from 1 - 6 :",&month);
	 scanf("%d",&month);
	 
	 if(month == 1)
	 {
	 	day_of_year = day; //jan
	 }
	 
	 if(month == 2)
	 {
	 	day_of_year = 31 + day;  // feb = jan + current days
	 }
	 
	  if(month == 3)
	 {
	 	day_of_year = 31 + 28 + day;  // mar = jan + feb + current days
	 }
	 
	  if(month == 4)
	 {
	 	day_of_year = 31 + 28 + 31+  day;  // april = jan + feb + march  + current days
	 }
	 
	  if(month == 5)
	 {
	 	day_of_year = 31 + 28 + 31 + 31 + day;  // may = jan feb march april current
	 }
	 
	  if(month == 6)
	 {
	 	day_of_year = 31 +  28 +  31 +  30 + 31 + day;  // june  jan feb march april  may current
	 }
	   
	   printf("day of year is : %d\n",day_of_year);
	   
	   //konsi skill seekh rha
	   
	   if(day_of_year >= 1 && day_of_year <= 50)
	   {
	   	printf("skill : programming\n");
	   }
	   
	   if(day_of_year > 50 && day_of_year <= 100)
	   {
	   	printf("skill : social marketing\n");
	   }
	   
	    if(day_of_year >=  101 && day_of_year <= 181)
	   {
	   	printf("skill : enterpreneurship\n");
	   }*/
	   
	   //*********************palindrome , reverse wala*****************
	   
	  /* int n ;
	   printf("enter number\n");
	   scanf("%d",&n);
	   
	   int original , reverse = 0 ;
	   int digit;
	   
	   original = n;
	   
	   while(n > 0)
	   {
	   	//last digit
	   	
	   	digit = n % 10;
	   	
	   	
	   	//reverse karaya
	   	reverse = reverse * 10  + digit;
	   	
	   	
	   	//last digit hataya
	   	
	   	n = n / 10;
	   	
	   }
	   
	   printf("reversed number is : %d\n",reverse);
	   	   if(reverse == original)
	   	   {
	   	   	
	   	   	printf("it is a palindrome\n"); 
	   	   }
	   	   	else{
	   	   		printf("it is not a palindrome\n");
				  }*/
				  
	//*****************SUM OF SERIES SIR WALI********************
	//odd number
	
	//  1 + 1/3 + 1/5 + 1/7 + ...+ 1/n
	
/*	int n;
	printf("enter number : ");
	scanf("%d",&n);
	
	for(int i = 1 ;i<= n ; i = i + 2)
	{
		printf("1/%d ",i);
		
		if(i + 2 <= n)
		{
			printf("+ ");
		}
	}
	printf("\n");
	*/
	//even number
	
		int num;
	printf("enter number : ");
	scanf("%d",&num);
	
	for(int i = 0 ;i<num ;i++)
	{
		printf("1/%.0f ", pow(2,i));
		
		if( i < num - 1);
		{
			printf("+ ");
		}
	}
	printf("\n");
	
	//************print prime num upto n term
		
		int n ;
		printf("enter number :");
		scanf("%d",&n);
		
		 for(int i = 1 ; i<= n ; i++)
		 {
		 	int count = 0;
		 	
		 	for(int j = 1 ; j <= i ; j++)
		 	{
		 		if( i % j == 0)
		 		{
		 			count++;
				 }
				 
				 }
				 if(count != 2){
				 	printf("%d",i);
			 }
		 
		 }
		 
		 //**************************fibonacci********************
		 
		 //upto 10
		 
		 int a = 0 , b = 1  , result = 0;
		 
		 for(int i  =1 ; i <= 10 ; i++)
		 {
		 	printf("%d",a);
		 	a = b;
		 	b = result;
		 	result = a + b;
		 }
	
	
	
	
	   
	   
	 
	 
	 return 0;
	 
	 
	 
	 
}
