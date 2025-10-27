#include <stdio.h>
# include <string.h>
int main(){
 char F_name[30];
 char L_name[30];
 printf("Enter Your First Name :");
 scanf("%s",F_name);
 printf("\n");
 printf("Enter Your Last Name :");
 scanf("%s",L_name);
 
strcat(F_name, " ");   
strcat(F_name, L_name);

printf("\nYour Full Name: %s\n", F_name);
strlen(F_name);
int len = strlen(F_name);
printf("\n");
printf("Total Characters %d",len-1);

}
