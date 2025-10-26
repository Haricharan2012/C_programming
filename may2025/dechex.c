#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
  {
     int num,rem,arr[20],count=0;
     char ch[20];
     char kh[20];
   
   
     printf("\n enter a decimal number");
     scanf("%d",&num);
     
     
     while(num!=0)
       {
         rem=num%16;
         num=num/16;
         count=count+1;
         arr[count-1]=rem;
        }
        
       for(int i=count-1;i>=0;i--)
         {
         
           if(arr[i]==10)
             {
               ch[i]='A';
             }
             
            else if(arr[i]==11)
              {
                ch[i]='B';
              }
            else if(arr[i]==12)
              {
                ch[i]='C';
              }
            else if(arr[i]==13)
              {
                ch[i]='D';
              }
            else if(arr[i]==14)
              {
                ch[i]='E';
              }
              
             else if(arr[i]==15)
               {
                 ch[i]='F';
               }
              else
                {
                 ch[i]='0' + arr[i];
                 }
                 
                 //kh[i]=kh[i]+ch[i];
          printf(" %c ",ch[i]);
          
          }
       }
          
          
            
             
     
