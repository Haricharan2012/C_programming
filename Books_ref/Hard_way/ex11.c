// program to demonstrate arrays and strings

#include<stdio.h>

int main(int argc ,char *argv[])

   {
     
     int numerical[4]={ 4 };
     char item[4]= { 'D' };
     
     printf("\n the numerical is: %d %d %d %d",numerical[0],numerical[1],numerical[2],numerical[3]);  //print each ele in an array
    
     printf("\n the item is: %c %c %c %c",item[0],item[1],item[2],item[3]); //print each ele of string
     
     printf("\n	the item is: %s",item);
     
     
     //reinitialize the array and the string 
     
     
     numerical[0]=1;
     numerical[1]=5;
     numerical[2]=0;
     numerical[3]=3;
     
     
     item[0]='S';
     item[1]='h';
     item[2]='o';
     item[3]='t';
     
     printf("\n the numerical is: %d %d %d %d",numerical[0],numerical[1],numerical[2],numerical[3]); //print each ele
     
     printf("\n the item is: %c %c %c %C" , item[0],item[1],item[2],item[3]);
     
     printf("\n item is %s",item);
     
     
     //other way 
     
     char *outcast = "four";
     
     printf("\n other: %s\n",outcast);
     
     printf("\n the other: %c %c %c %c\n", outcast[0],outcast[1],outcast[2],outcast[3]);
     
     return 0;
     
    }
     
    
