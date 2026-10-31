#include<stdio.h>

//#define x 2

//matrix addition and subtraction
void matadd(int[][2] ,int[][2]);
void matsub(int[][2] ,int[][2]);
//void matsub(int**,int**);


int main()
{
	int a[2][2]; //= {{2,2},
		      //{3,3}};
		      
	int b[2][2];  //= {{1,1},
	              //{1,1}};
	
	
	printf("\n enter first 2d array");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("\n enter second 2d array");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	
	
	//call add fun pass args
	
	matadd(a,b);
	matsub(a,b);
	//call sub fun pass args
	
	//matsub(&a,&b);
	
	
}


void matadd( int a[2][2], int b[2][2])
{
	int sum[2][2];

	for (int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
				
			sum[i][j]=a[i][j]+b[i][j];
		}
		
	}
		
	
	printf("\n the sum is\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			
		printf("%d ",sum[i][j]);
		
		}
		printf("\n");
		
	}
}


void matsub(int a[2][2],int b[2][2])
{
	int diff[2][2];
	
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			diff[i][j]=a[i][j]-b[i][j];
		}
	}
	
	printf("\n the diff is\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ", diff[i][j]);
		}
		
		printf("\n");
	}
}

/*
void matsub(int**a, int**b)
{
	int sub[2][2];
	
	sub[2][2]= a[2][2]-b[2][2];
	
	printf("\n the diff of matrices is %d",sub[2][2]);
}
*/


	
	
