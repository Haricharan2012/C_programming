#include<stdio.h>

struct Beyblade
{
	char beyname[20];
	char special_move[20];
	int  damage;
};
	
int main()
{
	struct Beyblade *beyptr,blade1;
	
	beyptr=&blade1;
	
	printf("\n enter the name of the beyblade: ");
	scanf("%s",beyptr->beyname);
	
	printf("\n enter the 'special move' of the beyblade: ");
	scanf("%s",beyptr->special_move);
	
	printf("\n enter the damage caused: ");
	scanf("%d",&beyptr->damage);
	
	printf("\n ------details------");
	
	printf("\n beyname : %s",beyptr->beyname);
	printf("\n special_move : %s",beyptr->special_move);
	printf("\n damage : %d\n",beyptr->damage);
}


