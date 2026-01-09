#include<stdio.h>
void fibo(int,int);

int main(int argc,char *argv[])
{
	printf("\n program to create fibonacci series");
	int f1=0;
	int f2=1;
	fibo(f1,f2);
	return 0;
}

void fibo(int f1,int f2)
{
	int sum=0;
	int limits;
	printf("\n enter the bounds/limits of series");
	scanf("%d",&limits);
	printf("\n %d",f1);
	printf("\n %d",f2);
	 	
	while(sum<limits)
	{
		sum=f1+f2;             //1=0=1
		printf("\n %d",sum); //printf("\n %d",f1);    //0
		//printf("\n %d",f2);    //1
		f1=f2;                 //f1=1
		f2=sum;                //f2=1	
	}
}
	
