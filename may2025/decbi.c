#include<stdio.h>

void main()
  {
  
    int num,rem,count=0;
    
    printf("\n enter a decimal number");
    scanf("%d",&num);
    int tnum = num;
    int arr[15];  //array to  store rem
    //loop to calculate binary
    
      while(tnum!=0)
         {
           rem=tnum%2;
           tnum=tnum/2;
           count=count+1;
           arr[count-1]=rem; //pushing rem to array
          }
          
       //loop to display rem in array
       
       for(int i=count;i>=0;i--)
           {
             printf("%d",arr[i]);
           }
      }
    
    
