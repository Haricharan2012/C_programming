#include<stdio.h>
void main()
   {
     int numb1,numb2,temp;
     printf("\n swapping program");
     printf("\n enter two numbers");
     scanf("%d%d",numb1,numb2);
     
     printf("\n numbers before swapping are %d and %d",&numb1,&numb2);
     
     //logic
     
     temp=numb1;
     numb1=numb2;
     numb2=temp;
     
     printf("\n the swapped numbers are: %d and %d ",numb1,numb2);
     
     }
