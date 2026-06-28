#include<stdio.h>

void radix_sort(int*,int);
void count_sort(int*,int,int);
void disp();

int main()
{
	int size;
	
	printf("\n enter the size of the array");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("\n enter the elements of the array");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	radix_sort(arr,size);
	
	disp();
}


void radix_sort(int arr[],int size)
{
	int max=arr[0];
	
	//find the maximum element of the array
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}

	//	perform countsort on each place 
	for(int place=1;max/place>0;place=place*10)
	{
		count_sort(arr,size,place);
	}
}


void count_sort(int arr[],int size,int place)
{
	int output[size]; //array for storing output
	int count[10]; //array for storing count/occurances of elements
	
 	//calculate occurance of elements
 	for(int i=0;i<size;i++)
 	{
 		int index=(arr[i]/place)%10; //extract digit from arr element 
 		count=count[index]+1;
 	}
 	
 	//calculate cumulative count
 	
 	for(int i=0;i<size;i++)
 	{
 		count[i]=count[i]+count[i-1];
 	}
 	
 	
 	//place the elementd in sorted order 
 	
 	//travese original array from right to left 
 	
 	for(int i=size-1;i>=0;i--)
 	{
 		int index=(arr[i]/place)%10;
 		output[count[index]-1]=arr[i]; //place ele according to occurance
 		count[index]=count[index]-1; //decrement occurance count of ele
 	}
 	

	//copy sorted Arr to original
	
	for(int i=0;i<size;i++)
	{
		arr[i]=output[i];
	}
}

void disp(int arr[],int size)
{
	printf("\n the sorted array is:  ");
	for(int i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
}
	
	
	
		
 	
	
	
		
	
			
