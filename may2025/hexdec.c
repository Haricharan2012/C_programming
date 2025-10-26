#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
  {
    char hexa[32];
    int i,decno=0,digit,count=0;
    
 
    printf("\n enter a hexadecimal number");
    scanf("%s",hexa);
      
      
      for(i=(strlen(hexa)-1);i>=0;i--)
        {
           switch(hexa[i])
             {
             
             case 'A': digit=10;
                       break;
                       
             case 'B': digit=11;
                       break;
                       
             case 'C': digit=12;
                       break;
                       
             case 'D': digit=13;
                       break;
                       
             case 'E': digit=14;
                       break;
                       
             case 'F': digit=15;
                       break;
                       
             default : digit=hexa[i]-'0';
             
            
            
            }
            
            decno=decno+(digit)*(int)pow(16,count);
            
            count++;
            
      
            
                      

         
       }
       
             printf("\n the decimal number is %d",decno);
     }
     
     
     
     
     
    
    
     
