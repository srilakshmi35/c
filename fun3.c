#include<stdio.h>
//int b;
extern int a;
static int c;
static int d;
int fun3()
{
	static int b=20;
	 printf("In fun3 a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
}
