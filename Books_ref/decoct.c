#include<stdio.h>
void main()
  {
    int rem,num,count=0,arr[5],decno=0;
    
    printf("\n enter a decimal number");
    scanf("%d",&num);
    
    decno=num;
    
    
    while(decno!=0)
      {
        rem=decno%8;
        decno=decno/8;
        count++;
        arr[count-1]=rem;
      }
      
     printf("\n the converted octal nmumber is");
     
      for(int i=count-1;i>=0;i--)
        {
          printf("%d",arr[i]);
        }     
    }
