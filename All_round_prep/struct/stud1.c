#include<stdio.h>
#include<string.h>

//---------struct------------//

struct student
{
	char name[30];
	int rollno;
	float marks;
	char sec;
}stud;


int main()
{
	
	
	printf("\n enter student's name:");
	scanf("%s",stud.name);
	
	printf("\n enter roll_no");
	scanf("%d",&stud.rollno);

	printf("\n enter marks:");
	scanf("%f",&stud.marks);

	printf("\n enter sec: ");
	scanf(" %c",&stud.sec);

	//print details
	
	printf("\n name is %s",stud.name);
	printf("\n rollno is %d",stud.rollno);
	printf("\n marks is %f",stud.marks);
	printf("\n sec is %c",stud.sec);
}
	
