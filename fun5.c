#include<stdio.h>
extern int a;
static int b;
extern int c;
static int d;
int fun5()
{
	printf("In fun5\na=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
}
