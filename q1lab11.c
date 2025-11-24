#include<stdio.h>
#include<string.h>

	struct employee{
		int emp_id;
		char firstname[10];
	    char lastname[10];
		float salary;
		char department[10];
	};
int main(void)
{
    struct employee person1;
	printf("Enter id of employee : ");
	scanf("%d",&person1.emp_id);
	
	printf("Enter first name of employee : ");
	scanf("%s",person1.firstname);
	
	printf("Enter last name of employee : ");
	scanf("%s",person1.lastname);
	
	printf("Enter salary : ");
	scanf("%f",&person1.salary);
	
	printf("Enter department : ");
	scanf("%s",person1.department);
	
	printf("\n---Employee Record---\n");
	printf("%d\n",person1.emp_id);
	printf("%s %s\n",person1.firstname,person1.lastname);
	printf("%f\n",person1.salary);
	printf("%s",person1.department);
	
   return 0;
			  }

