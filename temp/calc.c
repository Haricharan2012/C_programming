#include<stdio.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);

void main()
  {
    int numb1,numb2;
    printf("\n enter two numbers");
    scanf("%d%d",&numb1,&numb2);
     
    add(numb1,numb2);
    sub(numb1,numb2);
    mul(numb1,numb2);
    div(numb1,numb2);
    
  }
  
  
  void add(int fnum1,int fnum2)
     {
       int sum;
       sum=fnum1+fnum2;
       printf("\n sum of the numbers are=%d",sum);
      }
      
  void sub(int fnum1,int fnum2)
     {
       int neg;
       neg=fnum1-fnum2;
       printf("\n difference btw those numbers are=%d",neg);
      }
      
  void mul(int fnum1,int fnum2)
      {
        int prod;
        prod=fnum1*fnum2;
        printf("\n product of the numbers is=%d",prod);
      }
  void div(int fnum1,int fnum2)
     {
       int sol;
       sol=fnum1/fnum2;
       printf("\n div result of the numbers is=%d",sol);
      }
      
  
       
        
    
    
