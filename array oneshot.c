#include<stdio.h>
int main(void)
{
	//what is array
	//collection of same type of data
	
	//array mai variable name to ek hi hota hai to elements  ki pehchan hoti hain unke index se
	//elements = values store in an array
	//index starts from zero
	
	
	int a[5] = {1,2,3,4,5};  //5 dabbe create  kr liye
	a[4] = 50; //update krdia now our array is {1,2,3,4,50} so if we print a[4] to 5 hoga
	
	//index ko use krke array ko print or modify dhono kr skte hain
	
	//e.g if we write a[1] to 2 print hoga 
	
	printf("%d\n",a[0]);
	printf("%d\n",a[2]);
	printf("%d\n",a[4]);
	
	//array of float
	
	float b[5] = {2.3,4.5,6.5,8.4,10.8};
	printf("%f\n",b[2]);
	
	//array of character
	
	char c[5] = {'a', 'b', '+', 'S'};
	printf("%c\n",c[2]);
	
	//another method to declare and initialize an array
	
	int arr[5];
	arr[0] = 50;
	arr[1] = 60;
	arr[2] = 70;
	arr[3] = 80;
	arr[4] = 90;
	
	printf("%d\n",arr[0]);
	printf("%d\n",arr[2]);
	printf("%d\n",arr[4]);
	
	//*************user se input lo array value ka*************************
	
	/*int array[3];
	
	printf("Enter first element\n");
	scanf("%d",&array[0]);
	
	printf("Enter second element\n");
	scanf("%d",&array[1]);
	
	printf("Enter third element\n");
	scanf("%d",&array[2]);
	
	printf("%d",array[1]);*/   //bekar tareeqa hai agr zaida hote to loops use krte hain
	
	int array[5];
	
	for(int i = 0 ; i<5 ; i++)
	{
		printf("Enter element number %d\n",i);
		scanf("%d",&array[i]);
			}
			
			for(int i = 0 ; i < 5 ; i++)
			{
				printf("%d ",array[i]);
			}
	
	
	//**********************reverse krna hai*********************
	
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	
//	for(int i = 0 ; i < 10 ; i++)
//	{
//		int temp = array[i];
//		array [ i ] =  array[j];
//		array[j] = temp;
//	}
//	
//	for(int i = 0; i < 10 ; i++)
//	{
//		printf("%d",array[i]);
//	}
	
	
	
	
	
	
	
	
	
}
