#include<stdio.h>

int main(int argc,char *argv[])

  {
  
    int weapon;
    
    printf("Hero weapon selection");
    
    while(1)
     {
       printf("\n Choose your weapon warrior");
       printf("\n 1.Sword");
       printf("\n 2.Bow and arrow");
       printf("\n 3.Shield");
       printf("\n 4.magic staff");
       printf("\n choose wisely!!");
       scanf("%d",&weapon);
       
       if(weapon>=1 && weapon <=4)
        {
          break;
        }
        
       else 
         {
           printf("*-----you have to selct a weapon to continue warrior !! try again-----*");
           
          }
      
      }
      
     switch(weapon)
       {
         
         case 1: 
                 printf("\n----------------------------------------------------");
                 printf("\nBrilliant you've choosen the Sword");
                 printf("\n it's Excellent for close combat");
                 printf("\n you can perform various magic arts with the sword");
                 printf("\n----------------------------------------------------");
                 break;
                
         case 2:
                 printf("\n----------------------------------------------------");
                 printf("\n you've choosen the Bow");
                 printf("\n this is a perfect long range weapon");
                 printf("\n it shoots unlimited energy based arrows");
                 printf("\n----------------------------------------------------");
                 break;
                 
         case 3: 
                printf("\n----------------------------------------------------");
                printf("\n you've choosen the Shield");
                printf("\n it protects you from all attacks ");
                printf("\n you can use it defensively or offensively");
                printf("\n----------------------------------------------------");
                break;
                
         case 4:
                printf("\n----------------------------------------------------");
                printf("\n you've choosen the magic staff");
                printf("\n provides you with much needed flexibility with respect to magic attributes");
                printf("\n----------------------------------------------------");
                break;
                
               
        }
        
        return 0;
    }
               
       
