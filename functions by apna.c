#include<stdio.h>
#include<string.h>

//void printhello();
//void printgoodbye();
//int main(void)
//{
//	printhello();
//	printgoodbye();	
//   return 0;
//			  }
//
//
//void printhello(){
//	printf("hello");
//}
//
//void printgoodbye(){
//	
//	printf("good bye");
//}

//--------------------------------------------------------------

//void namaste();
//void bonjour();
//
//int main()
//{
//	char ch;
//	printf("enter F for french and H for hindhi : ");
//	scanf("%c",&ch);
//	
//	if(ch == 'H'){
//		namaste();
//	}
//	else if(ch == 'F')
//	{
//		bonjour();
//	}
//	
//	
//}
//
//void namaste(){
//	printf("namaste");
//}
//
//void bonjour(){
//	printf("bonjour");
//}

//************************************************
//int add(int a , int b);
//int main()
//{
//	int a , b;
//	printf("enter value of a and b");
//	scanf("%d %d",&a , &b);
//	
//	int sum = add(a,b);
//	printf("%d",sum);
//	
//	
//	
//}
//
//int add(int a , int b)
//{
//	return a +b;
//}

//************************************************
//
//void printTable(int n);
//
//int main()
//{
//	int n;
//	printf("enter num to print table : ");
//	scanf("%d",&n);
//	
//	printTable(n);
//}
//
//void printTable(int n)
//{
//	for(int i = 1 ; i <= 10 ; i++)
//	{
//		printf("%d * %d = %d\n",n,i,n*i);	}

//***********************************************************

int circle(int rad);
int square(int side);
int rect(int length , int width);
int main()
{
	int side = 2;
	int rad = 4;
	int length = 5;
	int width = 2;
	
	printf("area of circle is %d\n",circle(rad));
	printf("area of square is %d\n",square(side));
	printf("area of rect is %d",rect(length , width));

	
}

int circle(int rad){
	return 3.14 * rad*rad;
}

int square(int side)
{
	return side * side;
}

int rect(int length , int width)
{
	return length * width;
}


