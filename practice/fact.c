#include<stdio.h>

void fact(int);


int main()
{
	int num;
	//int fact;
	
	printf("\n enter a number");
	scanf("%d",&num);
	
	fact(num);
}


void fact(int num)
{ 
	int facto=1;
	
	while(num>0)  //5 //4
	{
		
		facto=facto*num;  //1*5  //5*4  //20*3   //60*2
 		num=num-1;  //5-1=4  //4-1=3  //3-1=2 //2-1=1
		//printf("\n the fact of num is %d",facto);
	}
	
	printf("\n the fact of num is %d",facto);
}
	
	
	//5=5 x 4 x 3 x2 x 1 
