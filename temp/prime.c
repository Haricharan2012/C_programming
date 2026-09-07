#include<stdio.h>
void main()
  {
  
    int num;
    int range;
    printf("\n enter a number toi check if its a prime or not");
    scanf("%d",&num);
      
    if((num==0) || (num==1))    //number  div by 1 and itself
          {
       printf("\n num is not prime number");
      }
   
    else
      {
      
      
      
     
//    printf("\n enter the range to be checked");  //range to be checked
  //      scanf("%d",&range);                       
          for(int i=2;i<num;i++)           //increment from 2 to range (ex- 2,3,4...100)
            {
             while(i!=num)             //while i dosenty equal number being checked
               {
              if(num%i!=0)                 //if num div by i not equal to zero 
                {
                 printf("\n  number is a prime number");
                }
              else
                 {
                  printf("\n number is not a prime number");
                  }
                  
                }
             }
             
           }
                  
       }


     
