#include<stdio.h>
void main()
  {
    int princ=1,rate=1,time=1;
    int si;
    
    
    printf("\n enter the principal,rate and time");
    scanf("%d%d%d",&princ,&rate,&time);
    
    //logic 
   
    si=(princ*rate*time)/100;
    
    printf("\n prinmcipal amt= %d",si);
  }
  
