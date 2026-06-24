#include<stdio.h>
void countsort(int*,int);
void disp(int*,int);

void main()
{
	int arr[]={4,2,2,3,3,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	countsort(arr,size);
	disp(arr,size);
}

void countsort(int arr[], int size)
{
	
	//find maximum element in the array
	
	int max=arr[0];
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	
	//create a new array to track occurances of each element and initialize it to 0
	
	int count[10];
	
	for(int i=0;i<=max;i++)
	{
		count[i]=0; //initialize all elements in array to zero
	}
	
	
	//store count of occurence of each element
	for(int i=0;i<size;i++)
	{
		count[arr[i]]=count[arr[i]]+1;
	}
	
	
	//store cumulative count of each element
	
	for(int i=0;i<=max;i++)
	{
		count[i]=count[i]+count[i-1]; // add count of prev ele to curr ele
	}
	
	
	//traverse the array from right to left and place element in output arr
	
	int output[10];
	
	for(int i=size-1;i>=0;i--)
	{
		output[count[arr[i]]-1]=arr[i]; //placing element in position according to occurance
		count[arr[i]]=count[arr[i]]-1;
	}

	//copy sorted array into original array
	
	for(int i=0;i<size;i++)
	{
		arr[i]=output[i];
	}
	
}

void disp(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}




	
	
	
	
	
		
		
		
		
