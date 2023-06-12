#include<stdio.h>
extern int a;
static int b;
static int c;
int d;
void fun2()
{
	printf("In fun2 a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
}
