#include<stdio.h>
void main()
  {
    int fah,celci=1;
    
    for(fah=0;fah<=300;fah=fah+20)
       {
         celci=(5*(fah-32)/9);
          printf("\n %d\t%d",fah,celci);
       }
      
   }
   
    
