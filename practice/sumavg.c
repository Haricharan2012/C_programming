#include<stdio.h>

int main()
{
	int sz,num;
	
	printf("\n enter the size of the array");
	scanf("%d",&sz);
	
	int arr[sz];
	int sum=0;
	
	printf("\n enter the array elements");
	for(int i=0;i<sz;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	//sum and avg calculation//
	
	for(int i=0;i<sz;i++)
	{
		sum=sum+arr[i];
	}
	
	float avg;
	avg=sum/sz;
	
	printf("\n sum of the array elements is %d",sum);
	printf("\n avg of the array elements is %.2f",avg);
	printf("\n");
}

	
	
