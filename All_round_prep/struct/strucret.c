#include<stdio.h>

struct metal
{
	char name[20];
	float meltpoint;
};

struct metal getinfo();

int main()
{
	struct metal me;
	
	me=getinfo();
	
	printf("\n display melting point");
	printf("\n \t name: %s",me.name);
	printf("\n \t melting point: %f",me.meltpoint);
	
	return 0;
}

struct metal getinfo()
{
	struct metal mx;
	
	printf("\n enter the name of the metal: ");
	scanf("%s",mx.name);
	
	printf("\n enter the melting point of the metal: ");
	scanf("%f",&mx.meltpoint);
	
	return mx;
}
