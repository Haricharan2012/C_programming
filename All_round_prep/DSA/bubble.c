#include<stdio.h>

void bubblesort(int*,int);
void disp(int*,int);


int main()
{
	int arr[10];
	int num;
	
	printf("\n enter the number of elements: ");
	scanf("%d",&num);
	
	printf("\n enter the array elements");
	printf("\n");
	
	for(int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	bubblesort(arr,num);
	
	disp(arr,num);
}


void bubblesort(int arr[],int size)
{

	int temp;
	//loop to control steps
	
	
	for(int step=0;step<size-1;step++)
	{
		//loop to compare elements
		
		for(int i=0;i<size-step-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
}


void disp(int arr[],int size)
{

	printf("\n the array in order is: ");
	
		for(int i=0;i<size;i++)
		{
			printf(" %d",arr[i]);
		}
		printf("\n");
}
