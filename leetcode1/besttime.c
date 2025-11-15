#include<stdio.h>
int maxprofit(int* prices,int pricesize);
int profit=0;

int main(int argc,char *argv)
{
  
	int prices[]={4};
	int pricesSize=sizeof(prices)/sizeof(prices[0]);
  
    	maxprofit(prices,pricesSize);   
    	
    	printf("\n profit is %d",profit); 
    	
    
}
    
    
int maxprofit(int* prices,int pricesSize)
{
  
   int smallest;
   
   smallest=prices[0];
   int largest=0;	
   int k=0;

    for(int i=0;i<pricesSize;i++)
       {
         if(prices[i]<smallest)
            {
              smallest=prices[i];
              k=i+1;
            }
        }
        
       
      for(k;k<pricesSize;k++)
           {	 
                 if(prices[k]>largest)
                 
                   {
                   
                    largest=prices[k];
          
                    }
                
           } 
           
     
             
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
             
  	
	
    
