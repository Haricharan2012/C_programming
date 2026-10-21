#include<stdio.h>

void circlex(int,float);
void rectx(int,int);
void squarex(int);
void trianglex(int,int,int,int);


int main()
{
	printf("\n ---------------Program to find perimeter and area of shapes--------------------");
	
	int choice;
	
	printf("\n select from the following options");
	printf("\n 1. circle ");
	printf("\n 2. rectangle");
	printf("\n 3. square");
	printf("\n 4. triangle");
	printf("\n enter your choice");
	scanf("%d",& choice");
	
	
	switch(choice)
	{
		case 1: printf("\n circumference and area of a circle");
			int r;
			float pi=3.14;
			
			printf("\n enter the radius of the circle");
			scanf("%d",&r);
			circlex(r,pi);
			break;
			
		
		case 2: printf("\nperimeter and area of rectangle");
			int l,b;
			printf("\n enter the length of the rectangle");
			scanf("%d",&l);
			printf("\n enter the breadth of the rectangle");
			scanf("%d",&b);
			
			
	
	
