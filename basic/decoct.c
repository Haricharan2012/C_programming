#include<stdio.h>

int main()
{
	int num=0;
	int rem=0;
	int arr[10];
	
	printf("\n enter a number");
	scanf("%d",&num);
	
	int tnum=num;
	int count=0;
	
	while(tnum!=0)
	{
		rem=tnum % 8;
		tnum=tnum / 8;
		arr[count]=rem;
		count=count+1;
	}
	
	printf("\n  the octal number is: ");
	
	for(int i=count;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}
		
