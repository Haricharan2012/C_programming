#include<stdio.h>
#include<string.h>

struct macros
{
	int protien;
	int carbs;
	int fats;
};

struct peanut
{
	char type[20];
	struct macros mac;
}pea1,pea2;


int main()
{
	char utype[20];
	//set 
	
	strcpy(pea1.type,"desi");
	pea1.mac.protien=50;
	pea1.mac.carbs=500;
	pea1.mac.fats=80;
	
	strcpy(pea2.type,"Shing");
	pea2.mac.protien=70;
	pea2.mac.carbs=350;
	pea2.mac.fats=60;
	
	
	printf("\n enter the type of peanuts to know it's respective macros\n");
	printf("\n-----------------------------------------------------------");
	scanf("%s",utype);
	
	//compare types
	
	if(strcmp(pea1.type,utype)==0)
	{
		printf("\n the macros of %s is: ",utype);
		printf("\n the protien content = %d",pea1.mac.protien);
		printf("\n the carb content = %d",pea1.mac.carbs);
		printf("\n the fat content = %d",pea1.mac.fats);
	}
	else if(strcmp(pea2.type,utype)==0)
	{
		printf("\n the macros of %s is: ",utype);
		printf("\n the protien content = %d",pea2.mac.protien);
		printf("\n the carb content = %d",pea2.mac.carbs);
		printf("\n the fat content = %d",pea2.mac.fats);
	}
	else
	{
		printf("\n unkown type entered");
	}
	
}
	
	
	
	
	
	
