#include<stdio.h>

int bin_src(int *,int,int,int);

int main()
{
	int size;
	int ele;
	printf("\n enter the size of the array");
	scanf("%d",&size);
	
	int arr[size];
	printf("\n enter the array elements");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
		
	
	printf("\n enter the element to be found");
	scanf("%d",&ele);
	
	int result=bin_src(arr,ele,0,size-1);
	
	if(result==-1)
	{
		printf("\n element not found");
	}
	else
	{
		printf("\n element found in loc %d",result);
	}
	
	return 0;
}

int bin_src(int arr[],int ele,int low,int high)
{
	//loop until low and high meet each other
	
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		
		if(ele==arr[mid])
		{
			return mid;
		}
		else if(ele > arr[mid])
		{
			low=mid+1;
		}
		else 
		{
			high=mid-1;
		}
	}
	return -1;
}




