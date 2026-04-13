#include<stdio.h>
#include<math.h>
#include<string.h>


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
	int nfloat= floatp*1000000;
	
	printf("\n the int part is %d",nintp);
	printf("\n the float part is %d",nfloat);
	
	int tint=nintp;
	int tfloat=nfloat;
	int rem=0;
	int frem=0;
	int count=0;
	
	//put intpart data into string//
	while(tint!=0)
	{
		rem=tint%10;
		tint=tint/10;
		str[count] =rem + '0';
		count=count+1;
	}
	
	//reverse string//
	char tstr[30];
	int j;
	
	for(int i=strlen(str)-1;i>=0;i--,j++)
	{
		tstr[j]=str[i];
		
	}
	
	tstr[j]='\0';
	printf("\n the current string is %s",tstr);
	
	str[count]='.';
	
	//put floatpart data into string //
	
	char fstr[30];
	
	while(tfloat!=0)
	{
		frem=tfloat%10;
		tfloat=tfloat/10;
		fstr[count]=frem + '0';
		count=count+1;
	}
	
	fstr[count]='\0';
	
	
	for(int i=strlen(str)-1;i>=0;i--,j++)
	{
		tstr[j]=str[i];
		
	}
	
	
	
	
		
		
	
	
	
	
}

 
