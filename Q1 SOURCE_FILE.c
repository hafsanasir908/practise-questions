//NAME : HAFSA NASIR
//ROLL NO : CT-068
#include<stdio.h>
int main()
{
	char choice;
	printf("Are you sure to delete\n");
	printf("Enter Y or y to delete\n");
	printf("Enter N or n to cancel\n");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case'Y':
		case'y':
		printf("Deleted Successfully\n");
		break;
		
		case 'N':
		case 'n':
		printf("Delete Cancelled\n");
		break;
		
		default:
			printf("Choose the right option\n");
			break;
			
	}
}
