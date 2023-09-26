#include<stdio.h>
int sum(int x,int y);
int sum(int x,int y)
{
	int c;
	c=x+y;
	return c;
}
int sum1(int x,int y)
{
	int d;
	d=x-y;
	return d;
}
int sum2(int x,int y)
{
	int e;
	e=x*y;
	return e;
}
int sum3(int x,int y)
{
	int f;
	f=x/y;
	return f;
}
int main()
{
	int a,b,cal;
	printf("--------MENU--------\n");
	printf("1.Addition\n");
	printf("2.Substraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("Enter your Choice:");
	scanf("%d",&cal);


	switch(cal)
	{
	   case 1:printf("Enter first number:");
	          scanf("%d",&a);
	          printf("Enter second number:");
	          scanf("%d",&b);
	          int c=sum(a,b);
	          printf("Addition: %d",c);
	         break;
	   case 2:printf("Enter first number:");
	          scanf("%d",&a);
	          printf("Enter second number:");
	          scanf("%d",&b);
	          int d=sum1(a,b);
	          printf("Subtraction: %d",d);
	        break;
    	case 3:printf("Enter first number:");
	          scanf("%d",&a);
	          printf("Enter second number:");
	          scanf("%d",&b);
	          int e=sum2(a,b);
	          printf("Multiplication: %d",e);
	        break;
	    case 4:printf("Enter first number:");
	          scanf("%d",&a);
	          printf("Enter second number:");
	          scanf("%d",&b);
	          int f=sum2(a,b);
	          printf("division: %d",f);
	        break;
	     
	    
	}
	
	
	
}
