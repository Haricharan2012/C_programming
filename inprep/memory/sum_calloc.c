#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,*ptr;
	int sum=0;
	
	printf("\n enter the number of elements");
	scanf("%d",&num);
	
	ptr=(int*)calloc(num,sizeof(int));
	
	if(ptr==NULL)
	{
		printf("\n memeory cannot be allocated");
		exit(0);
	}
	
	printf("\n enter the elements: ");
	for(int i=0;i<num;i++)
	{
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	
	printf("\n the sum is:  %d",sum);
	free(ptr);
}
	
	
	
