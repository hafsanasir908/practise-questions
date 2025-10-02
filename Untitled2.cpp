#include<stdio.h>
int main(void)
{
	int choice , amount , balance = 10000;
	
	printf("ATM Meanu: \n");
	printf("1. Check balance : \n");
	printf("2. Withdraw money : \n");
	printf("3. Deposit Money : \n");
	
	printf("Enter our choice : \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Your balance is : %d",balance);
			break;
			
			case 2:
				printf("Enter amount to withdraw : ");
				scanf("%d",&amount);
				
				if(amount > balance)
				{
					printf("Insufficient Balance!\n");
				}
				else{
					balance = balance - amount;
					printf("Withdraw Successful! Remaining balance : %d",balance);
				}
				break;
				
				case 3:
					printf("Enter amount to deposit : \n");
					scanf("%d",&amount);
					
					balance = balance + amount;
					printf("Deposit successful! New balance : %d",balance);
					break;
					
					default : 
					printf("Invalid Option");
				}
	}

