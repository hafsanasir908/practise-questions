#include<stdio.h>
#include<string.h>

int choice;
	int id[10];
	char name[10][50];
	char disease[10][50];
	int age[10];
	int total_patient = 3;
	
   void add_patient()
   {
   	if(total_patient >= 10)
   	{
   		printf("Patient list is full, Try Again later!\n");
   		return;
   		
	   }
	   
	   printf("---Add Patient---\n");
	   id[total_patient] = total_patient + 1;
	   
	   printf("Enter name : ");
	   scanf("%s",name[total_patient]);
	   printf("\n");
	   
	   printf("Enter disease : ");
	   scanf("%s",disease[total_patient]);
	   printf("\n");
	   
	   printf("Enter age : ");
	   scanf("%d",&age[total_patient]);
	   printf("\n");
	   
	   total_patient++;
	   printf("Patient Added Successfully\n");
   }
   
   void view_patient()
   {
   	if(total_patient == 0)
   	{
   		printf("No patients available!\n");
   		return;
	   }
	   
	   printf("---All patients---\n");
	   for(int i = 0 ; i < total_patient ; i++)
	   {
	   	printf("patient # %d\n",i+1);
	   	printf("patient name : %s\n",name[i]);
	   	printf("patient id : %d\n",id[i]);
	   	printf("patient disease: %s\n",disease[i]);
	   	printf("patient age %d\n",age[i]);
	   	printf("------------------------------------\n");
	   }
	   printf("\n");
   }
   
   void search_patient()
   {
   	int searchID;
   	printf("Enter patient ID : ");
   	scanf("%d",&searchID);
   	for(int i = 0 ; i < total_patient ; i++)
	   {
	   	if(id[i] == searchID){
		   
		   printf("Record found!\n");
	   	printf("patient name : %s\n",name[i]);
	   	printf("patient id : %d\n",id[i]);
	   	printf("patient disease: %s\n",disease[i]);
	   	printf("patient age %d\n",age[i]);
	   	return;
	   }
	   }
	   
	   printf("No record found!\n");
   }
   
   void update_patient()
   {
   	int updateID;
   	printf("Enter patient ID to update : ");
   	scanf("%d",&updateID);
   	
   	for(int i = 0 ; i < total_patient ; i++)
   	{
   		if(id[i] == updateID)
   		{
   			printf("Enter  new name : ");
	   scanf("%s",&name[i]);
	   printf("\n");
	   
	   printf("Enter  new disease : ");
	   scanf("%s",&disease[i]);
	   printf("\n");
	   
	   printf("Enter  new age : ");
	   scanf("%d",&age[i]);
	   return;
   			
		   }
	   }
	   printf("no id found!");
   }
   
   

int main(void)
{
	id[0] = 1;
    strcpy(name[0], "Hafsa");
    strcpy(disease[0], "Fever");
    age[0] = 18;
    
    
    id[1] = 2;
    strcpy(name[1], "Eman");
    strcpy(disease[1], "Flu");
    age[1] = 19;
    
    
    id[2] = 3;
    strcpy(name[2], "Dua");
    strcpy(disease[2], "Cough");
    age[2] = 18;
    
	
	while(1){
	
	printf("-----------------------Patient Record System---------------------------\n");
	printf("MENU\n");
	printf("1.Add Patient\n");
	printf("2.View All Patient\n");
	printf("3.Search Patient\n");
	printf("4.Update Patient\n");
	printf("5.Exit Patient\n");
	
    printf("Enter your choice : ");
    scanf("%d",&choice);
    
    switch(choice)
    {
    	case 1:
    		add_patient();
    		break;
    		
    		case 2:
    			view_patient();
    			break;
    			
    			case 3:
    				search_patient();
    				break;
    				
    				case 4:
    					update_patient();
    					break;
    					
    					case 5:
    						printf("Exiting\n");
    						return;
    						
    						default : 
							printf("Invalid choice! Enter again : ");
    						break;
    					}
    				}
	
   return 0;
}
			  

