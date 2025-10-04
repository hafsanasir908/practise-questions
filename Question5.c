//NAME : HAFSA NASIR
//ROLL NO : CT-068

#include<stdio.h>
int main(void)
{
	int calories , fat_grams;
	float calories_from_fat , percent_calories_from_fat;
	
	printf("Enter total calories\n");
	scanf("%d",&calories);
	
	printf("Enter fat grams\n");
	scanf("%d",&fat_grams);
	
	if(calories <= 0 || fat_grams < 0)
	{
		printf("Calories and fat grams must be positive!\n");
	}
	else{
		calories_from_fat = fat_grams * 9;
	}
	
	if(calories_from_fat > calories){
		printf("Calories from fat cannot be greater be total calories!\n");
	}
	else{
		percent_calories_from_fat = (calories_from_fat / calories) * 100;
		
		printf("Calories from fat : %f\n",calories_from_fat);
		printf("Percentage of calories from fat : %f%\n",percent_calories_from_fat);
		
		if(percent_calories_from_fat < 30){
			printf("This food is low in fat\n");
		}
		else{
				printf("This food is not low in fat\n");
			}
		} 
	} 
	
				
		
	



