#include<stdio.h>
void fact(int);

int main()
{
	int num;
	printf("\n find factorial of a number");
	scanf("--------------------------------");
	printf("\n enter the number to find factorial for ");
	scanf("%d",&num);
	fact(num);
}

void fact(int num)
{
	int prod=num;  //6
	int prev=num-1;  //6-1=5
	
	while(prev!=0)
	{
		prod=prod*prev;  //6=6*5  //30*4   //120*3
		prev--;          //5-- =4  //4-- =3  //2
	}
	
	printf("\n the factorial of the number is %d",prod);
	
}
	
