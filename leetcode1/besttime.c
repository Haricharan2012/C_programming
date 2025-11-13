#include<stdio.h>
int maxprofit(int* prices,int pricesize);

int main(int argc,char *argv)
{
  
	int prices[]={5};
	int pricesSize=sizeof(prices)/sizeof(prices[0]);
  
    	maxprofit(prices,pricesSize);    
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
         
             //largest=prices[k+1];
             
        }
        
      for( k;k<pricesSize;k++)
      
           {
              if(prices[k]>largest)
                {
                  largest=prices[k];
                 }
           } 
      
                     
             //    }
                  
                  printf("\n the samllest is %d",smallest);
             if(k>=pricesSize)
              {
               		 printf("\n failure");  //return null
              } 
             else
                {
                  printf("\n k= %d",k);
                }
                  
                  printf("\n largest is %d",largest);
                  printf("\n size %d",pricesSize);
                 int  profit=largest-smallest;
                  printf("\n profit is %d",profit);
                 }
             
  	
	
    
