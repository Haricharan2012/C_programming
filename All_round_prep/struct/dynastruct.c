#include<stdio.h>
#include<stdlib.h>

struct beyblade
{
	char name[20];
	char type[20];
	int hp;
};

int main()
{
	struct beyblade *bey1;
	int n;
	
	printf("\n enter the number of beyblades");
	scanf("%d",&n);
	
	//allocate memory for n number of beyblades
	
	bey1=(struct beyblade*)malloc(n*sizeof(struct beyblade));
	
	for(int i=0;i<n;i++)
	{
		printf("\n enter the name,type and hp of the beyblade: ");
		scanf("%s %s %d",(bey1+i)->name,(bey1+i)->type,&(bey1+i)->hp);
	}
	
	printf("\n display name,type and hp");
	
	for(int i=0;i<n;i++)
	{
		printf("\n Name: %s \t Type: %s \t HP: %d",(bey1+i)->name,(bey1+i)->type,(bey1+i)->hp);
	}
}
		
