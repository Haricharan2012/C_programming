#include<stdio.h>

int main()
{
	int a=5;
	int b=10;
	
	printf("\n the original value of a is %d",a);
	printf("\n the original value of b is %d",b);
	
	//addition method
	
	a=a+b; //5+10=15;
	b=a-b; //15-10=5;
	a=a-b; //15-5=10;
	
	printf("\n the swapped value of a is %d",a);
	printf("\n the swapped value of b is %d",b);
}
	
	
	
	
