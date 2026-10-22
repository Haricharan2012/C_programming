#include<stdio.h>
#include<stdbool.h>
#include<string.h>

#define V 5  //number of vertices in graph

#define IN 999999   //value for min

int g[V][V] = {
    { 0,  6, 72,  0,  0},
    { 6,  0, 90, 19, 37},
    {72, 90,  0, 51, 66},
    { 0, 19, 51,  0, 28},
    { 0, 37, 66, 28,  0}
};
	     
	     
int main()
{
	int no_edge; //stores number of edges selected for MST
	
	//array to keep track of vertices in mst
	
	int select[V];
	
	//set all elements of selected to false
	
	memset(select,false,sizeof(select));
	
	
	//set no of edges to zero initially
	
	no_edge = 0;
	
	//start prims algorithm with vertex 0
	
	select[0] = true;
	
	//declaring var for source and des vertex
	
	int x;  //source
	int y;  //dest
	
	
	//print heading 
	
	printf("Edge : weight\n");
	
	//mst for v vertices contain v-1 edges
	
	while(no_edge < V-1)
	{
		
		//set min
		
		int min = IN;
		
		//initially set x and y to 0
		
		x=0;
		y=0;
		
		
		//go through every vertex
		
		for(int i=0;i<V;i++)
		{
			
			//select vertex which is in mst
			
			if(select[i])
			{
				for(int j=0;j<V;j++)
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
		}
			
			
			//display edge and its vertex
			
			printf( "%d - %d : %d\n",x,y,g[x][y]);
			
			//add vertex y to the MST
			
			select[y] = true;
			
			//adding edge 
			no_edge=no_edge + 1;
			
		}
		return 0;
	}
			
						
	
	
	
