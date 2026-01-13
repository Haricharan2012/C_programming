#include<stdio.h>

int main()
{
	
	int arr[]={5,10,15,20,25};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("\n program to find largest element in an array");
	int largest=arr[0]; //largest=5
	
	for(int i=1;i<size;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
	
	printf("\n the largest element in the array is %d",largest);
}	
