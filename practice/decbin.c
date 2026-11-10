#include<stdio.h>

int main()
{

	int num;                                //60
	int rem;
	int arr[32]={0};
	
	printf("\n program to convert decimal-numbers to binary\n");
	
	printf("\n enter a decimal number to convert it");   
	
	scanf("%d",&num);   //60
	
	int count=0;
	
	while(num>1)
	{
		rem=num%2;          //60%2   = 0           //30%2 = 0
		num=num/2;	    //60/2   =30	   //30/2 = 15
		arr[count]=rem;    // arr[0]=0             //arr[1]=1  
		count=count+1;     // count = 0+1          //count = 1+1
		
		//printf("\n rem = %d ",rem);
	}
	
	arr[count]= num;
	//printf("\n the value of count is %d",count);
	//printf("\n the value of num is %d",num);
	
	printf("\n");
	printf("\n the corresponding binary number is: ");
	
	
	for(int i=count;i>=0;i--)
	{
	printf("%d", arr[i]);
	}
	printf("\n");
}
