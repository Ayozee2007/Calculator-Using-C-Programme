// WAP to build a calculator
#include<stdio.h>
void main()
{
	int a,b,result;
	char op;
	printf("\n enter the value of a and b");
	scanf("\n %d \n %d",&a,&b);
	printf("\n enter the operator");
	scanf("\n %c",&op);
	if(op=='+')
	 result=a+b;
	else if(op=='-')
	 result=a-b; 
	else if(op=='*')
	 result=a*b;
	else if(op=='/')
	 result=a/b;
	else if(op=='%')
	 result=a%b;
	else
	 printf("\n invaild operator");
	printf("\n result=%d",result);
	
	 
	
}

