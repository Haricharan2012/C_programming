#include<stdio.h>
void main()
  {
    int num,tnum,range1,range2;
    int isprime;
    
    printf("\n enter the lower range");
    scanf("%d",&range1);
    
    printf("\n enter the upper range");
    scanf("%d",&range2);
    
    for(num=range1;num<=range2;num++)  //traversaL
       {
           
         if(num<=1)
           {
             isprime=0;  //0 and 1 are not prime
           }
           
        else
           {
           isprime=1;  //assumption that it is a prime number
           
          for(tnum=2;tnum<=num/2;tnum++)  //check
            {
              if(num%tnum==0)
                {
                  isprime=0;  //if divisible by any other number then it is not a prime number
                }
             }
             
             if(isprime)
             {
               printf("\n prime number btw ranges %d and %d are %d",range1,range2,num);
             }
             
             }
             
           
             
             
        }
        
     }
            
       
