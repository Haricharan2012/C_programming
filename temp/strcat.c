#include<stdio.h>
#include<string.h>

void main()
  {
    char str1[10],str2[10];
    char cons[20];
    printf("\n enter the first string");
    scanf("%10s",str1);
    printf("\n enter second string");
    scanf("%10s",str2);
    strcat(str1,str2);
    printf("%s",str1);
  }
    
