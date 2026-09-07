#include<stdio.h>
#include<math.h>
void main()
  {
    int num,rem;
    int count=0;
    printf("\n enter a  binary number");
    scanf("%d",&num);
    
    int dec=0;
    while(num!=0)
      {
        rem=num%10;
        num=num/10;
        count=count+1;
        
        dec=dec+rem*(int)pow(2,count-1);	
        
        
     
      }
      
    printf("\n the count is: %d",count);
    printf("\n the decimal no is :%d",dec);
    
    
    
  }
