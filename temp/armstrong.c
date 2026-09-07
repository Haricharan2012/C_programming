#include<stdio.h>
void main()
  {
    int numb,rem,tnum,sum=0;
    printf("\n program to find armstrong number");
    printf("\n enter a number ");
    scanf("%d",&numb);
     
    tnum=numb;  
    //logic
    while(tnum>0)
      {
       rem=tnum%10;
       tnum=tnum/10;
      
       sum=sum+rem*rem*rem;
       
       }
 printf("\n%d", sum);
 
 if(sum==numb)
    {
     printf("\n number is an armstrong number %d",sum);
    }
 else
    {
     printf("\n number is not an armstrong number %d",sum);
    }
  }
    
    
