//program to demontsrate if else statement

#include<stdio.h>

int main(int argc ,char *argv[])

  {
  
      if(argc==1)
        
        {
        
         printf("\n there is only one argument,yuck");
         
        }
        
       else if(argc>1&&argc <4)
        {
         printf("\nhere are your arguments:\n");
         
          for(int i=0;i<argc;i++)
            {
              printf("%s",argv[i]);
            }
          printf("\n");
            
        }
        
        
      else
        {
          printf("\n too many arguments,yuck");
        }
       return 0;
       
    }
          
         
         
