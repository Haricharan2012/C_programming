#include<stdio.h>

void swap(int *el1,int *el2);
void heapify(int arr[],int size,int i);
void insert(int arr[],int num);
void delete(int arr[],int num);
void disp(int arr[],int size);

int size=0;

int main()
{
	int array[10];
	
	//--insertion--//
	
	insert(array,3);
	insert(array,9);
	insert(array,2);
	insert(array,1);
	insert(array,4);
	insert(array,5);
	
	printf("\n the Max heap is: \n");
	disp(array,size);
	
	insert(array,7);
	
	printf("\n after inserting the heap is: \n");
	disp(array,size);
	
	
	delete(array,3);
	
	printf("\n heap after deletion is: \n");
	disp(array,size);
	
	return 0;
	
}

//-------------SWAP----------------------//

void swap(int *el1,int *el2)
{
	int temp=*el1;
	*el1=*el2;
	*el2=temp;
}


//----------heapify------------------//

void heapify(int array[],int size,int i)
{
	int largest=i;
	
	int leftcd = 2*i+1;
	int rightcd = 2*i+2;
	
	if(leftcd<size && array[leftcd]>array[largest])
	{
		largest=leftcd;
	}
	if(rightcd<size && array[rightcd]>array[largest])
	{
		largest=rightcd;
	}
	
	if(largest!=i)
	{
		swap(&array[i],&array[largest]); //swap current index with either leftchild or right child
		heapify(array,size,largest);
	}
}


//----------insertion-----------------//
void insert(int array[],int newnum)
{
	array[size]=newnum; //inserting new element in this last index
	size=size+1; //increment to accomodate the new ele
	
	int current = size-1;// lqst ele
	while(current!=0)
	{
		int parent=(current-1)/2;
		if(array[current]>array[parent])
			{
				swap(&array[current],&array[parent]);
				current=parent; //current element takes parent element's place if larger
			}
		else
			{
			break;
			}
	}
}


//-------------deletion--------------//
void delete(int array[],int num)
{
	for(int i=0;i<size;i++)
	{
		if(array[i]==num) //element found
		{
			break;
		}
		
		if(array[i]==size)
		{
			printf("\n element not found to delete");
			return;
		}
			
		swap(&array[i],&array[size-1]);
		//swap element to be deleted with last element in the heap
		
		size=size-1; //decrement to delete element from heap
		
		if(i<size)
		{
			heapify(array,size,i); //heapify from the current index to adjust the rest of the heap
		}
	}
}


//---------------display------------//

void disp(int array[],int size)
{
	for(int i=0;i<size;++i)
	{
		printf("%d ",array[i]);
		printf("\n");
	}
}



				
