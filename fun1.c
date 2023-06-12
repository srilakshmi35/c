#include<stdio.h>
int a ;
static int b;
static int c;
int d; 
void fun1()
{
//	extern int a;
	printf("In fun1\na=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
}
