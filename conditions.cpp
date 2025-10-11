#include<stdio.h>
int main(void)
{
	//conditional operators
	
	//electricity bill (sir wala)
	
//	int units ;
//	float bill;
//	
//	printf("enter units\n");
//	scanf("%d",&units);
//	
//	if(units <= 100)
//	{
//		bill = units * 5;  
//	}
//	
//	else if(units<= 200)
//	{
//		bill = (100 * 5) + (units - 100) * 7;
//		
//	}
//	
//	else if(units <= 300)
//	{
//		bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
//	}
//	
//	else{
//		
//		bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 15;
//		
//	}
//	
//	printf("your bill is : %f",bill);

//**************************************************************************

//parking fee calculator  //first 2hrs : rs 50 total
                        //next3 hrs : rupees 20/hr
                        //beyond 5 hrs : rupees 10/hr 
                        

     float hours , total;
     printf("enter hours\n");
     scanf("%f",&hours);
     
     if(hours <= 2)
     {
     	total =50;
	 }
	 else if(hours <= 5)
	 {
	 	total = (50) + (hours - 2) * 20; 
	 }
	 else{
	 	
	 	total = 50 + (3 * 20 ) + (hours - 5) * 10;
	 }
	 
	 printf("total parking fee is RS:%f",total);
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
     
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
