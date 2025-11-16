#include<stdio.h>
int maxprofit(int* prices,int pricesize);
int profit=0;

int main(int argc,char *argv)
{
  
	int prices[]={7,1,5,3,6,4};
	int pricesSize=sizeof(prices)/sizeof(prices[0]);
  
    	maxprofit(prices,pricesSize);   
    	
    	printf("\n profit is %d",profit); 
    	
    
}
    
    
int maxprofit(int* prices,int pricesSize)
{
  
   int smallest;      //smallest value
   int secsmallest;   //second smallestvalue
   
   smallest=prices[0];
   int largest=0;	
   int k=0;

    for(int i=0;i<pricesSize;i++)
       {
         if(prices[i]<smallest)      //if any element is less than the smallest value
            {
              smallest=prices[i];     
              k=i+1;                //find largest from the next index after smallest val
            }
        }
        
       
        
       
      for(k;k<pricesSize;k++)                        	
           {	 
                 if(prices[k]>largest)    // if any elemnt is greater than lasgest element 
                 
                   {
                   
                    largest=prices[k];
                    
          
                    }
                
           } 
           
           
             if(smallest==0)                //if it is found out that smallest is zero then 
                { 
                	//k=0;
                
                  for(int t=0;t<pricesSize;t++)
                     {
                        if(prices[t]>0)      // if element is greater than zero but less than the largest value
                          {
                          
                          
                            secsmallest=prices[t];                     //find the second smallest number
                            smallest=secsmallest;
                           
                          //  k=t+1;
                           }
                     }
                  }
           
              printf("\n second %d",secsmallest);
              printf("\n the samllest is %d",smallest);
              printf("\n largest is %d",largest);
           
            
                       
             
             if(largest>0 && largest!=smallest)
             {
                  
              printf("\n the samllest is %d",smallest);
              printf("\n largest is %d",largest);
              profit=largest-smallest;
              
              return profit;
             }

   
       
              else
                 {
                  printf("\n failed not possible");
                  return profit;
                 }
    
}
             
  	
	
    
