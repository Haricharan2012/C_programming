#include<stdio.h>
#include<stdlib.h>

void quicksort(int*,int,int);
int  partition(int*,int,int);
void swap(int*,int*);
void disp(int*,int);

int main()
{

	int size;
	
	printf("\n enter the size of the array  ");
	scanf("%d",&size);
	
	int *arr=(int*)malloc(size * sizeof(int));
	
	printf("\n enter the elements of the array ");

	for(int i=0;i<size;i++)
	{
	scanf("%d",&arr[i]);
	}
	
	//before sorting the array is
	
	printf("\n the array before sorting is: ");
	
	disp(arr,size);
	
	//after sorting
	
	quicksort(arr,0,size-1);
	
	printf("\n the array after sorting is: ");
	
	disp(arr,size);
	
	free(arr);
	
}


void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		//find the pivot element 
		
		int p_ind= partition(arr,low,high);
		
		//after finding pivot index 
		//recursively call quicksort to sort the respective sub arrays
		
		quicksort(arr,low,p_ind-1);
		quicksort(arr,p_ind+1,high);
		
	}
}



int partition(int arr[],int low,int high)
{
	//set rightmost element as pivot ele
	
	int pivot=arr[high];
	
	//select a greater element
	
	int i=(low-1);
	
	//traverse through array ,compare each element with pivot
	
	for(int j=low;j<high;j++)
	{
		if(arr[j]<=pivot)
		{
			//if element smaller than the pivot is found,swap it with element at position i
			
			i++;
			
			//swap 
			
			swap(&arr[i],&arr[j]);
		}
	}
	
	//swap pivot element with greater element at i
	
	swap(&arr[i+1],&arr[high]);
	
	return(i+1); // pass pivot index
	
}

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}


void disp(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
}
	
	
			
			
	
