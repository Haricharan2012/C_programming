#include<stdio.h>

int main()
{
	int n=6;
	int k=3;

	int arr[6]={1,4,5,9,13,14};

	int sz=sizeof(arr)/sizeof(arr[0]);

	int count=0;
	for(int i=0;i<sz-1;i++)
	{
	if(arr[i+1]-arr[i]<=k)
		{
			if(arr[i+1]!=arr[i])
			{
			  count=count+1;
			}
		}
	}

	printf("\n the no of pairs is %d",count);
}
