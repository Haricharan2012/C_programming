#include<stdio.h>

int main()
{
	int num=0;
	int rem=0;
	int arr[10];
	
	printf("\n enter a decimal number");
	scanf("%d",&num);
	
	int tnum=num;
	int xnum=num;
	int count=0;
	
	while(xnum!=0)
	{
		xnum=xnum/2;
		count=count+1;
	}
	
	int pcount=0;
	
	while(tnum!=0)
	{
		rem=tnum%2;
		tnum=tnum/2;
		arr[pcount]=rem;
		pcount=pcount+1;
	}
	
	printf("\n the binary number is : ");
	for(int i=pcount-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}
