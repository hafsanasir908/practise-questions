#include<stdio.h>
#include<string.h>
int main(void)
{
	int choice;
	char rentchoice;
	char fullname[50][50];
	int available[5] = {1 , 1 , 1 , 1 , 1};
	char carcode[5] = {'A','B','C','D','E'};
	int renteddays[5] = {0,0,0,0,0};
	char code;
	int days , amount , inpamount;
	int carindex = -1;
	while(1)
	{
		printf("welcome to car rental system\n");
		printf("system menu\n");
		printf("1. view available cars\n");
		printf("2. return car\n");
		printf("3. view rented cars\n");
		
		printf("enter your choice : \n");
		scanf("%d",&choice);
		
		if(choice == 1)
		{
			for(int i = 0; i < 5 ; i++)
			{
				if(available[i] == 1)
				{
					if(i == 0) printf("alto : price : 5000 : code : A\n");
					if(i == 1) printf("city : price : 6000 : code : B\n");
					if(i == 2) printf("corolla  : price : 7000 : code : C\n");
					if(i == 3) printf("vitz : price : 8000 : code : D\n");
					if(i == 4) printf("civic : price : 9000 : code : E\n");
				}
			}
			
			printf("want to rent a car y/n : ");
			scanf(" %c",&rentchoice);
			
			if(rentchoice == 'n'  || rentchoice == 'N')
			{
				continue;
			}
			
			if(rentchoice == 'y' || rentchoice == 'Y')
			{
				
				printf("enter car code to proceed : ");
				scanf(" %c",&code);
			
				if((code == 'a' || code == 'A') && available[0] == 1 )
				{
					available[0] = 0;
					carindex = 0;
					printf("enter num of days : ");
					scanf("%d",&days);
					renteddays[0] = days;
					amount = days * 5000;
				}
				
		     	else if((code == 'b' || code == 'B') && available[1] == 1)
		     	{
		     		available[1] = 0;
		     		carindex = 1;
		     		printf("enter num of days : ");
		     		scanf("%d",&days);
		     		renteddays[1] = days;
		     		amount = 6000 * days;
				 }
				 
				 else if((code == 'c'|| code == 'C') && available[2] == 1)
				 {
				 	available[2] = 0;
				 	carindex = 2;
				 	printf("enter num of days : ");
				 	scanf("%d",&days);
				 	renteddays[2] = days;
				 	amount = 7000 * days;
				 	
				 }
				 
				 else if((code == 'd'|| code == 'D') && available[3] == 1)
				 {
				 	available[3] = 0;
				 	carindex = 3;
				 	printf("enter num of days : ");
				 	scanf("%d",&days);
				 	renteddays[3] = days;
				 	amount = 8000 * days;
				  } 
			 
			    else if((code == 'e' || code == 'E'))
			    {
			    	available[4] = 0;
			    	carindex = 4;
			    	printf("enter num of days : ");
			    	scanf("%d",&days);
			    	renteddays[4] = days;
			    	amount = 9000 * days;

				}
				else{
					printf("enter valid car code or car was rented");
					continue;
					
				}
				
				printf("enter your full name :  ");
				scanf(" %[^\n]",fullname[carindex]);
				
				printf("total rent : %d",amount);
				printf("enter amount : ");
				scanf("%d",inpamount);
				
				if(inpamount == amount)
				{
					printf("car rented successfully\n");
					
					printf("coustomer name : %s",fullname[carindex]);
					printf("car code : %c",code);
					printf("days : %d",days);
				}
				
				else{
					printf("enter exact amount \n");
					if(carindex != -1)
					{
						available[carindex] = 1;
						
					}
					
				}
				
			}
			
			}
			
			if(choice == 2)
			{
				printf("enter car code to return  car : ");
				scanf("%c",&code);
				
				if((code == 'a' || code == 'A') && available[0] != 1)
				{
					printf("Alto returned successfullly");
					available[0] = 1;
				}
				
				
				else if((code == 'b' || code == 'B') && available[1] != 1)
				{
					printf("city returned successfullly");
					available[1] = 1;
				}
				
				
				else if((code == 'c' || code == 'C') && available[2] != 1)
				{
					printf("vitz returned successfullly");
					available[2] = 1;
				}
				
				
				else if((code == 'd' || code == 'D') && available[3] != 1)
				{
					printf("corolla returned successfullly");
					available[3] = 1;
				}
				
				
				else if((code == 'e' || code == 'E') && available[4] != 1)
				{
					printf("Alto returned successfullly");
					available[4] = 1;
				}
				
				else{
					printf("enter valid car code or car was not rented \n");
				
				}
			}
			
			if(choice == 3)
			{
				int found = 0;
				for(int i = 0 ; i  < 5 ; i++)
				{
					if(available[i] == 0)
					{
						found = 1;
						printf("coustomer name : %s",fullname[i]);
						printf("carcode : %c",carcode[i]);
						printf("Days : %d",renteddays[i]);
					}
				}
				
				if(found == 0)
				{
					printf("no cars are currently rented \n");
				}
			}
			if(choice == 4)
			{
				printf("exiting goodbye!");
				break;
			}
		}
	
   return 0;
			  }
		
