#include<stdio.h>
#include<stdlib.h>

void merge_sort(int*,int,int);
void merge(int*,int,int,int);
void disp(int*,int);

int main()
{
	//dynamic allocation
	
	int *arr;
	int sz;
	
	printf("\n enter the size of the array");
	scanf("%d",&sz);
	
	arr=(int*)malloc(sz*sizeof(int));
	
	printf("\n enter the elements of the array");
	
	if(arr==NULL)
	{
		return 1;
	}
	
	for(int i=0;i<sz;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	merge_sort(arr,0,sz-1);
	
	printf("\n the sorted array is: ");
	
	disp(arr,sz);
	
	free(arr);
	
	return 0;
}

void merge_sort(int arr[],int first,int last)
{
	if(first<last)
	{
	
		 int mid=first+(last-first)/2; //mid is a point where array is divided into two parts 
		 
		 //recursive calls 
		 
		merge_sort(arr,first,mid); //sort sub array frist to mid
		merge_sort(arr,mid+1,last);//sort sub arraay mid+1 to last
		
		//merge the sorted elements 
		
		merge(arr,first,mid,last);
	}
}


void merge(int arr[],int first,int mid,int last)
{
	//create subarrays from the main array
	
	//sizes of the sub array
	int s1= mid-first+1; //size of firstr sub array
	int s2=last-mid; //size of second sub array
	
	//declare subarrays with sizes
	
	int sub1[s1],sub2[s2];  //declare subarray with specific size
	
	//fill subarrays
	
	for(int i=0;i<s1;i++)
	{
		sub1[i]=arr[first+i];
	}
	
	for(int j=0;j<s2;j++)
	{
		sub2[j]=arr[mid+1+j];
	}
	
	//maintain current index of sub array and main array
	
	int i,j,k;
	
	i=0;
	j=0;
	k=first;
	
	//until we reach either sub array pick the largest/smallest among the elements and add it to the correct positons at arr[first...last]
	
	while(i<s1 && j<s2)
	{
		if(sub1[i]<=sub2[j])
		{
			arr[k]=sub1[i];
			i++;
		}
		else
		{
			arr[k]=sub2[j];
			j++;
		}
		k++;
	}
	
	//when we run out of elements in either of the sub arrays then add remaining elements
	
	while(i<s1) // j!<s2
	{
		arr[k]=sub1[i];
		i++;
		k++;
	}
	
	while(j<s2) //i!<j2
	{
		arr[k]=sub2[j];
		j++;
		k++;
	}
	
}

void disp(int arr[], int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
}
	
	
	
	
	
	
	
	
		
		
	
	
	
	
