#include<stdio.h>
#include<string.h>
int main(void)
{
	//pointer types , void pointer , pointer arithmetic
	
	int a = 1025;
	int *p;
	p = &a;
	
	printf("size of integer is %d bytes \n",sizeof(int));
	printf("address = %d  , value = %d",p,*p);
   return 0;
			  }

