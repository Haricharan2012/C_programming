#include<stdio.h>
void main()
  {
    int fah,cel,lower=0,upper=300,step=20;
    
    fah=lower;
    
    while(fah<=upper)
      {
        cel=(5*(fah-32)/9);
        printf("\n %d\t%d",fah,cel);
        fah=fah+20;
       }
    }
       
