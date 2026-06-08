#include<stdio.h>

struct pokemon
{
	char name[20];
	int lvl;
	int hp;
}pk1;

int main()
{
	//assigning pokemon name
	
	printf("\n enter the pokemon's name");
	scanf("%s",pk1.name);
	
	
	//enter pokemon level
	
	printf("\n enter your pokemon's level");
	scanf("%d",&pk1.lvl);
	
	//enter pokemon's Hp
	printf("\n enter your pokemon's  Hp");
	scanf("%d",&pk1.hp);
	
	printf("\n the name of the pokemon is %s",pk1.name);
	printf("\n the level of pokemon is %d",pk1.lvl);
	printf("\n the hp of the pokemon is %d",pk1.hp);
	
}
