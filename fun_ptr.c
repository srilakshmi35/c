#include<stdio.h>
#include<stdlib.h>
int fun(int a,int b);
int main(void)
{
	int (*fp)(int,int);
	fp = fun;
	int res = fp(5,6);
	printf("%d\n",res);
}
int fun(int a,int b) 
{
	int c;
	c = a + b;
	return c;
}
