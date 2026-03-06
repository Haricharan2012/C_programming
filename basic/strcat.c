#include<stdio.h>
#include<string.h>

int main()
{
 	//char str1[10]="Moon";
 	//char str2[10]="eater";
 	
 	char str1[10]="";
 	char str2[10]="";
 	
 	printf("\n enter a string");
 	scanf("%s",str1);
 	
 	printf("\n enter another string");
 	scanf("%s",str2);
 	
 	strcat(str1,str2);
 	
 	printf("\n the  new string is %s",str1);
 }
