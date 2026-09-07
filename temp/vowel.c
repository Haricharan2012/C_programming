#include<stdio.h>
void main()
  {
    char letter;
    printf("\n enter a letter \n");
    scanf("%c",&letter);
    
    //checking if it is vowel or consonant //
    
    if((letter == 'A')||(letter=='E')||(letter=='I')||(letter=='O')||(letter=='U'))
      {
  
         printf("\n letter is a vowel");
       }
     else
        {
          printf("\n letter is a consonant");
         }
    }
    
