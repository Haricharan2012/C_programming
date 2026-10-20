#include<stdio.h>
#include<stdbool.h>
#include<string.h>

#define V 5

#define IN 999999

int g[v][v]={ {0,9,75,0,0},
	      {9,0,95,19,42},
	      {75,95,0,51,66},
	      {0,19,51,0,31},
	      {0,42,66,31,0} };
	     
	     
int main()
{
	int no_edge; //stores number of edges
	
	//array to keep track of vertices in mst
	
	int select[V];
	
	//set all elements of selected to false
	
	memset(select,false,sizeof(select));
	
	
	//set no of edges to zero initially
	
	no_edge = 0;
	
	//start prims algorithm with vertex 0
	
	select[0] = false;
	
	//declaring var for source and des vertex
	
	int x;
	int y;
	
	//print heading 
	
	printf("Edge : weight\n");
	
	
	
	//mst for v vertices contain v-1 edges
	
	while(no_edge < v-1)
	{
		
		//set min
		
		int min = IN;
		
		//initially set x and y to 0
		
		x=0;
		y=0;
		
		
		//go through every vertex
		
		for(int i=0;i<v;i++)
		{
			
			//select vertex which is in mst
			
			if(select[i])
			{
				for(int j=0;j<v;j++)
				{
					//select an vertex which is not selected but forms an edge with i
					
					if(!select[j] && g[i][j])
					{
						if(min>g[i][j])
						{
						
							min = g[i][j];
							x=i;
							y=j;
						}
					}
				}
			}
			
			
			//display edge and its vertex
			
			printf( "%d - %d,  %d,x,y,g[x][y]);
						
	
	
	
