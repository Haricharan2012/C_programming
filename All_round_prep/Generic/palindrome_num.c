#include<stdio.h>

int main()
{
	int num,rev=0,rem,unrev;
	printf("\n program to check if a number is a palindrome");
	printf("\n---------------------------------------------");
	
	printf("\n enter a number");
	scanf("%d",&num);
	
	unrev=num;
	int n=num;
	
	while(n!=0)
	{	
		
		rem=n%10;  //55%10 =5 //5%10=5
		rev=rev*10+rem; //0*10+5=5//5*10+5 =55
		n=n/10;//55/10=5//5/10=0
	}
	
	if(rev==unrev)
	{
		printf("\n the number is a palindrome");
		printf("\n rev is %d",rev);
		printf("\n unrev is %d",unrev);
	}
	else
	{
		printf("\n the number is not a palindrome");
		printf("\n rev is %d",rev);
		printf("\n unrev is %d",unrev);
	}
}
