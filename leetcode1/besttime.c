#include<stdio.h>
int maxprofit(int* prices,int pricesize);

int main(int argc,char *argv)
  {
  
    int prices[]={7,6,4,3,1};
    
    int pricesSize=sizeof(prices)/sizeof(prices[0]);
  
    maxprofit(prices,pricesSize);
  
    
    }
    
    
int maxprofit(int* prices,int pricesSize)
  {
  
   int smallest;
   
   smallest=prices[0];
   
    for(int i=1;i<pricesSize;i++)
       {
         if(prices[i]<smallest)
            {
              smallest=prices[i];
              
              printf("\n the samllest is %d",smallest);
              
              int largest=i;
              
              for(int k=i+1;k<pricesSize;k++)
                 {
                   if(prices[k]>largest)
                     {
                      largest=prices[k];
                      } 
                     
                  }
                  printf("\n largest is %d",largest);
                 int  profit=largest-smallest;
                  printf("\n profit is %d",profit);
                 }
                 
               
  
  }
 }	
    
