#include<stdio.h>

int lin_src(int *,int,int);

int main()
{
	int size;
	int item;
	printf("\n enter the size of array");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("\n enter array elements");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\n enter the item to be found");
	scanf("%d",&item);
	
	int result = lin_src(arr,size,item);
	
	if(result==-1)
	{
		printf("\n element not found");
	}
	else
	{
		printf("\n elements are found at loc %d",result);
		printf("\n");
	}
}

int lin_src(int arr[],int size,int item)
{
	//go through each element sequentially and check for element
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]==item)
		{
			return i;
		}
	}
	return -1;
}



