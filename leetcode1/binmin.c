#include<stdio.h>

int binser(int seq[],int x,int low,int high);

int main(int argc,char *argv[])
{

	int seq[]={3,4,5,6,7,8,9};
	int size= sizeof(seq)/sizeof(seq[0]);
	int low=0;
	int high=size-1;
	int x=7;
	
	int result= binser(seq,x,low,high);
	
	if(result==-1)
	{
		printf("\n element not found");
        }
        else
        {
        	printf("\n element found at index %d",result);
        }
        return 0;
}


int binser(int seq[],int x,int low,int high)
{

	int mid;

	while(low<=high)
	{
		mid=low + (high - low) / 2;

		
		if(x==seq[mid])
		{	
			return mid;  //if mid element = ele to be found return mid
		}
		
		if(x>seq[mid])
		{
			low=mid+1;  //if x>mid then compare with ele after it 
		}
		
		else
		{
			high=mid-1;   //if x<mid then compare with ele before mid
		}
	}
		
        return -1;   //default
        
}
	
