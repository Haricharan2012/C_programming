#include<stdio.h>

void disp(int*,int);
void insert_sort(int*,int);

int main()
{
	int num,arr[5];
	
	printf("\n enter the number of elements");
	scanf("%d",&num);
	
	printf("\n enter the array elements");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	insert_sort(arr,num);
	printf("\n the sorted array is");
	disp(arr,num);
}

void insert_sort(int arr[],int size)
{
	for(int step=1;step<size;step++)
	{
		int key=arr[step]; //keyu ele
		
		int ele= step-1; //ele to the left of key
		
		
		//compare key with each element on its left 
		
		while(ele>=0 && key<arr[ele])
		{
			arr[ele+1]=arr[ele]; //push ele to next loc
			ele--; 	// reset 
			
		}
		arr[ele+1]=key; //key added to the front of ele
	}
}

void disp(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\n %d ",arr[i]);
	}
	printf("\n");
}
 






