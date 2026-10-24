#include<stdio.h>

int main()
{
	int sz;
	int min=0;
	int max=0;
	
	printf("\n enter the size of array");
	scanf("%d",&sz);
	
	int arr[sz];
	
	printf("\n enter the array elements");
	for(int i=0;i<sz;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	min=arr[0];
	max=arr[1];
	
	for(int i=0;i<sz;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	
	printf("\n the min ele in array is %d",min);
	printf("\n the max ele in array is %d",max);
	printf("\n");
	
}
	
	
	
	
