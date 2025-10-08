#include<stdio.h>
int main(void)
{
//	*
//	**
//	***
//	****
//	*****
//	
//	for(int i = 1; i <= 5; i++)
//	{
//		for(int j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}


//       *
//     * * *      
//    * * * * *   
//  * * * * * * *
//* * * * * * * * *
  
  for(int i =1; i <= 5 ; i++)
  {
  	for(int k= i; k < 5; k++)
  	{
  		printf(" ");
	  }
	  for(int j = 1; j <= (i * 2 - 1); j++)
	  {
	  	printf("*");
		} 
		printf("\n");
		
		 }
}
