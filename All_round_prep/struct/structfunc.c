#include<stdio.h>

struct metal
{
	char name[20];
	float meltpoint;
};

void disp(struct metal mx);

int main()
{
	struct metal me;
	
	printf("\n enter the name of the metal: ");
	scanf("%s",me.name);
	
	printf("\n enter the melting point of %s: ",me.name);
	scanf("%f",&me.meltpoint);
	
	disp(me);
}

void disp(struct metal mx)
{	
	printf("\n melting point info");
	printf("\n \t metal: %s",mx.name);
	printf("\n \tmelting point: %f",mx.meltpoint);
	printf("\n");
}
