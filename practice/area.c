#include<stdio.h>
#include<stdlib.h>

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
	scanf("%d",&choice);
	
	
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
			int l,br;
			printf("\n enter the length of the rectangle");
			scanf("%d",&l);
			printf("\n enter the breadth of the rectangle");
			scanf("%d",&br);
			rectx( l, br);
			break;
			
	
		case 3: printf("\n perimeter and area of a square");
			int s;
			printf("\n enter the side of a square");
			scanf("%d",&s);
			squarex(s);
			break;
			
		case 4: printf("\n the perimeter and area of a rectangle");
			int a,b,c,h;
			
			printf("\n enter all three sides of triangle");
			scanf("%d %d %d",&a,&b,&c);
			
			printf("\n enter height of a triangle");
			scanf("%d",&h);
			
			trianglex(a,b,c,h);
			
			break;
			
			
		case 5: exit(0);
		
		default: printf("default case");
			 break;
	};
	return 0;
}


void circlex(int r, float pi)
{
	float circ,area;
	
	circ = 2* pi * r;
	
	area = pi*r*r;
	
	printf("\n circumference of circle is %d",circ);
	printf("\n area of circle is %d",area);
	
}


void rectx(int l, int br)
{
	int per,area;
	
	per= 2*(l+br);
	
	area = l*br;
	
	printf("\n perimeter of rectangle is %d",per);
	printf("\n area of rectangle is %d" ,area);
}


void squarex(int x)
{
	int per,area;
	
	per = 4*s;
	
	area = s*s;
	
	printf("\n perimeter of square is %d",per);
	printf("\n area of rectangle is %d", area);
	
}


void trianglex(int a,int b,int c,int h)
{
	int per,area;
	
	per=a+b+c;
	area= 0.5 *b*h;
	
	printf("\n perimeter of triangle is %d",per);
	printf("\n area of triangle is %d",area);
}













			
	
	
