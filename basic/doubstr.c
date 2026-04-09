#include<stdio.h>
#include<math.h>

int main()
{
	double num;
	char str[30];
	//int rem=0.0;
	
	printf("\n enter a number to convert: ");
	scanf("%lf",&num);
	
	double intp,floatp;
	
	floatp= modf(num,&intp);
	
	printf("\n the floatpart is %f",floatp);
	
	intp=num-floatp;
	
	printf("\n the int part is %f",intp);
	
	int newv=floor(intp);
	
	printf("\n the int part is %d",intp);

}
