#include<stdio.h>

typedef struct rect
{
	int length;
	int breadth;
	int area;
}rect;

void calc(rect rec1,rect rec2,rect *result1, rect *result2);

int main()
{
	rect rec1,rec2,result1,result2;
	
	printf("\n enter the length of rectangle1: ");
	scanf("%d",&rec1.length);
	
	printf("\n enter the breadth of rectangle1: ");
	scanf("%d",&rec1.breadth);	
	
	printf("\n enter the length of rectangle2: ");
	scanf("%d",&rec2.length);
	
	printf("\n enter the breadth of rectangle2: ");
	scanf("%d",&rec2.breadth);
	
	calc(rec1,rec2,&result1,&result2);
	
	printf("\n area of rect1 = %d",result1.area);
	printf("\n area of rect2 = %d",result2.area);
	
}

void calc(rect rec1,rect rec2,rect *result1,rect *result2)
{
	result1->area=(rec1.length*rec1.breadth);
	result2->area=(rec2.length*rec2.breadth);
}

	
	
