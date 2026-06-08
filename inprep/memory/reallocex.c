#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,num1,num2,*ptr;
	
	printf("\n enter initial size");
	scanf("%d",&num1);
	
	ptr=(int*)malloc(num1*sizeof(int));
	
	printf("\n adress of previously allocated memory is: \n");
	
	for(i=0;i<num1;i++)
	{
		printf("%p\n",ptr+i);
	}
	
	printf("\n enter the new size");
	scanf("%d",&num2);
	
	ptr=realloc(ptr,num2* sizeof(int));
	
	printf("\n addresses of newly allocated memory is: ");
	
	for(i=0;i<num2;i++)
	{
		printf("%p\n",ptr+i);
	}
	
	free(ptr);
}
	
