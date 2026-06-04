#include<stdio.h>
void selection_sort(int*,int);
void swap(int*,int*);
void disp(int*,int);

int main()
{
	int arr[5];
	int num;
	
	printf("\n enter the number of elements: ");
	scanf("%d",&num);
	
	printf("\n enter the array elements: ");
	
	for(int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	selection_sort(arr,num);
	printf("\n the sorted array is: ");
	disp(arr,num);
}

void selection_sort(int arr[],int size)
{
	for(int step=0;step<size-1;step++)
	{
		int min= step;
		
		for(int i=step;i<size;i++)
		{
			if(arr[i]<arr[min])
			{
				min=i;
			}
		}
		swap(&arr[min],&arr[step]);
	}
}


void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void disp(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
