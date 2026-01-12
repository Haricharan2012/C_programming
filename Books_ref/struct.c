#include<stdio.h>
#include<string.h>
void main()
  {
    struct stu 
       {
         char name[10];
         int id;
         };
         
         struct stu fu;
       
    
         strcpy(fu.name,"dok");
        
         fu.id=2012;  
         
         
       printf("\n the name is %s",fu.name);
       printf("\n the id is %d",fu.id);
       
       
       }
