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
	
	int nintp=(int)(intp);
	int nfloat=(int)(floatp);
	
	printf("\n the int part is %d",nintp);
	printf("\n the float part is %d",nfloat);
}
