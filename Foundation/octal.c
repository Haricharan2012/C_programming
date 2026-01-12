#include<stdio.h>
void main()
  {
    int decno,rem,count=0;
    int arr[32];
    
    printf("\n enter a decimal number");
    scanf("%d",&decno);
    
    int loopno=decno;
    
    while(loopno!=0)
      {
        rem=loopno%8;
        arr[count]=rem;
        count=count+1;
        loopno=loopno/8;
        
        
        printf("\n the remainder  is: %d",rem);
        printf("\n the quotient is:%d",loopno);
        printf("\n the count is:%d",count);
        printf("\n----------------------------");
        
        
        
        
        
       }
       
       printf("\n thr octal number is:");
      for(int i=count-1;i>=0;i--)
        {
          printf("%d",arr[i]);
        }
     }
