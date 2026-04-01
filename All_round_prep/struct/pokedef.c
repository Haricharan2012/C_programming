#include<stdio.h>

typedef struct pokemon
{

	char name[30];
	char type[30];
	int level;
	int hp;
}poketeam;

int main()
{
	poketeam poke1,poke2;
	
	printf("\n ------------------pokemon Contest registration-------------------------");
	
	//--------prim pokemon details---------------//
	
	printf("\n enter the name of your primary pokemon: ");
	scanf("%s",poke1.name);
	
	printf("\n enter the type of %s ",poke1.name);
	scanf("%s",poke1.type);
	
	printf("\n enter the level of %s ",poke1.name);
	scanf("%d",&poke1.level);
	
	printf("\n enter the HP of %s ",poke1.name);
	scanf("%d",&poke1.hp);
	
	//------------------------------------------//

	//--------2nd pokemon details---------------//
	
	printf("\n enter the name of your secondary pokemon: ");
	scanf("%s",poke2.name);
	
	printf("\n enter the type of %s ",poke2.name);
	scanf("%s",poke2.type);
	
	printf("\n enter the level of %s ",poke2.name);
	scanf("%d",&poke2.level);
	
	printf("\n enter the HP of %s ",poke2.name);
	scanf("%d",&poke2.hp);
	
	//------------------------------------------//
	
	printf("\n the details of your registed pokemon are as follows");
	
	printf("\n primary pokemon name: %s",poke1.name);
	printf("\n--------------------------------------");
	printf("\n primary pokemon type: %s:",poke1.type);
	printf("\n--------------------------------------");
	printf("\n primary pokemonn level: %d:",poke1.level);
	printf("\n--------------------------------------");
	printf("\n primary pokemon hp:%d",poke1.hp);
	printf("\n--------------------------------------");
	
	
	printf("\n 2nd pokemon name: %s",poke2.name);
	printf("\n--------------------------------------");
	printf("\n 2nd pokemon type: %s:",poke2.type);
	printf("\n--------------------------------------");
	printf("\n 2nd pokemonn level: %d:",poke2.level);
	printf("\n--------------------------------------");
	printf("\n 2nd pokemon hp:%d",poke2.hp);
	printf("\n--------------------------------------");
}
	
	
	
	
	
