#include<stdio.h>

void swap(int el1,int el2);
void heapify(int arr[],int size,int i);
void insert(int arr[],int num);
void delete(int arr[],int num);
void disp();

void main()
{
	int array[10];
	
	//--insertion--//
	
	insert(array,3);
	insert(array,2);
	insert(array,7);
	insert(array,5);
	insert(array,8);
	insert(array,9);
	
	printf("\n the Max heap is: ");
	disp();
	
	delete(array,8);
	
	printf("\n heap after deletion is: ");
	disp();
	
}

//-------------SWAP----------------------//

void swap(int el1,int el2)
{
	int temp=el1;
	el1=el2;
	el2=temp;
}


//----------heapify------------------//

void heapify(int array[],int size,int i)
{
	int largest=i;
	
	int leftcd = 2i+1;
	int rightcd = 2i+2;
	
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
		int parent=(curent-1)/2;
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
void deletion(int array[],int num)
{
	for(int i=0;i<size;i++)
	{
		if(array[i]==num) //element found
		{
			break;
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

void display()
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",array[i]);
		printf("\n");
	}
}



				
